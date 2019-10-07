#include "xparameters.h"
#include "xgpio.h"
#include "led_ip.h"
#include "xscutimer.h"
#include "xuartps_hw.h"
#include "matrix.h"

#define ONE_SECOND 325000000 // half of the CPU clock speed
//====================================================

int main (void) 
{
	XGpio dip, push;
	int i, psb_check, dip_check;
	char value = '0', skip, run = 1;
	XScuTimer Timer; /* Cortex A9 SCU Private Timer Instance */
	uint8_t counter = 0;
	VectorArray pInst, aInst, bTInst;
	uint32_t tBefore, tAfter;

	// PS Timer related definitions
	XScuTimer_Config *ConfigPtr;
	XScuTimer *TimerInstancePtr = &Timer;
	int32_t Status;


	xil_printf("-- Initializing --\r\n");
	// Init Switches
	XGpio_Initialize(&dip, XPAR_SWITCHES_DEVICE_ID);
	XGpio_SetDataDirection(&dip, 1, 0xffffffff);

	// Init push buttons
	XGpio_Initialize(&push, XPAR_BUTTONS_DEVICE_ID);
	XGpio_SetDataDirection(&push, 1, 0xffffffff);

	// Init the timer
	ConfigPtr = XScuTimer_LookupConfig (XPAR_PS7_SCUTIMER_0_DEVICE_ID);
	Status = XScuTimer_CfgInitialize (TimerInstancePtr, ConfigPtr, ConfigPtr->BaseAddr);
	if (Status != XST_SUCCESS){
		xil_printf("Timer init() failed\r\n");
		return XST_FAILURE;
	}
	XScuTimer_LoadTimer(TimerInstancePtr, ONE_SECOND); // Load timer with delay in multiple of ONE_SECOND
	XScuTimer_EnableAutoReload(TimerInstancePtr); // Set AutoLoad mode
	XScuTimer_Start(TimerInstancePtr); // Start the timer

	xil_printf("-- Start of the Program --\r\n");
	xil_printf("Enter choice: 1 (SW->Leds), 2 (Timer->Leds), 3 (Matrix), 4 (Exit)\r\n");
	setInputMatrices(aInst,bTInst);
	while (run)
	{
		// Read UART input if any available
		if (XUartPs_IsReceiveData(STDIN_BASEADDRESS))
		{
			xil_printf("CMD:> ");
			value = inbyte();
			xil_printf("%c\r\n",value);
		}

		switch (value)
		{
		case '1':
			dip_check = XGpio_DiscreteRead(&dip, 1);
			LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR,0,dip_check);
			break;

		case '2':
			LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR,0,counter);
			break;

		case '3':
			XScuTimer_RestartTimer(TimerInstancePtr);             //Clear Timer
			tBefore = XScuTimer_GetCounterValue(TimerInstancePtr);//Read timer before
			multiMatrixSoft(aInst,bTInst,pInst);                  //Do multiplication
			tAfter = XScuTimer_GetCounterValue(TimerInstancePtr); //Read timer after
			displayMatrix(pInst);                                 //Print matrix P
			xil_printf("Execution time: %d [ticks]\r\n",tBefore-tAfter);
			value = '0';
			break;

		case '4':
			run = 0;
			break;

		default:
			//do nothing
			break;
		}

		// Check timer expired
		if(XScuTimer_IsExpired(TimerInstancePtr)) {
			// clear status bit
			XScuTimer_ClearInterruptStatus(TimerInstancePtr);
			// Increment counter
			counter = counter + 1 % 0x0F;
		}
	}

	// Stop the timer
	XScuTimer_Stop(TimerInstancePtr);

	xil_printf("-- End of the Program --\r\n");
}
