
/*#include "xparameters.h"
#include "xgpio.h"
#include "led_ip.h"
//====================================================

int main (void) 
{

   XGpio dip, push;
   int i, psb_check, dip_check;
	
   xil_printf("-- Start of the Program --\r\n");
 
   XGpio_Initialize(&dip, XPAR_SWITCHES_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&dip, 1, 0xffffffff);
	
   XGpio_Initialize(&push, XPAR_BUTTONS_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&push, 1, 0xffffffff);
	

   while (1)
   {
	  psb_check = XGpio_DiscreteRead(&push, 1);
	  xil_printf("Push Buttons Status %x\r\n", psb_check);
	  dip_check = XGpio_DiscreteRead(&dip, 1);
	  xil_printf("DIP Switch Status %x\r\n", dip_check);
	  
	  // output dip switches value on LED_ip device
	  LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR, 0, dip_check);
	  for (i=0; i<9999999; i++);
   }
}
*/

#include "xparameters.h"
#include "xgpio.h"
#include "led_ip.h"
#include "XScuTimer.h"
//====================================================
 #define ONE_SECOND 325000000
int main (void)
{

   // PS Timer related definitions
   XScuTimer Timer;
   XScuTimer_Config *ConfigPtr;
   XScuTimer *TimerInstancePtr = &Timer;
   // Initialize the timer
   ConfigPtr = XScuTimer_LookupConfig (XPAR_PS7_SCUTIMER_0_DEVICE_ID);
   s32 Status = XScuTimer_CfgInitialize (TimerInstancePtr, ConfigPtr, ConfigPtr->BaseAddr);

   // handle error
   if (Status != XST_SUCCESS)
   {
	   xil_printf("Timer init() failed\r\n");
	   return XST_FAILURE;
   }

   XGpio dip, push;
   int i, dip_check;
   char value, skip;
   xil_printf("-- Start of the Program --\r\n");

   XGpio_Initialize(&dip, XPAR_SWITCHES_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&dip, 1, 0xffffffff);

   XGpio_Initialize(&push, XPAR_BUTTONS_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&push, 1, 0xffffffff);

   while (1)
   {
	  xil_printf("CMD:> ");
	  value = inbyte();
	  skip = inbyte();
	  skip = inbyte();

	  switch(value)
	  {
	  case '1':
		  dip_check = XGpio_DiscreteRead(&dip, 1);
		  LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR, 0, dip_check);
		  break;

	  case '2':
		  XScuTimer_LoadTimer(TimerInstancePtr, ONE_SECOND);
		  // Set AutoLoad mode
		  XScuTimer_EnableAutoReload(TimerInstancePtr);
		  // Start the timer
		  XScuTimer_Start(TimerInstancePtr);
		  int j = 0;
		  while(j < 16)
		  {
			  // Check timer expired
			  if(XScuTimer_IsExpired(TimerInstancePtr))
			  {
				  // clear status bit
				  XScuTimer_ClearInterruptStatus(TimerInstancePtr);
				  j++;
				  LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR, 0, j);
			  }
		  }
		  break;
	  default:
		  break;
	  }
   }
}
