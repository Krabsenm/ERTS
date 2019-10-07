#include "ios.h"

void iosc::iosThread() {
	//Group ports into AXI4 slave slv0
	#pragma HLS resource core=AXI4LiteS metadata="-bus_bundle slv0" variable=ctrl

	//Initialization
	wait();

	// Process the data
	while(true)
	{
		// Wait for start
		wait();

		 if (ctrl.read() != 0x0)
		 {
	         switchs = inSwitch.read() & ctrl.read();
		 }
	     else
	     {
	         switchs = secCounter;
	     }
		outLeds.write(switchs);
	}
}


void iosc::iosPulseThread()
{
	while (true)
	{
		//if (++counter >= 1/(2*(CLOCK_PERIOD*10^(-9))))
		if (++counter_clk >= 50000000)
		{
			secCounter++;
			counter_clk = 0;
			//secPulse = !secPulse;
			//secPulse.write(!secPulse.read());
		}
		wait();
	}

}
