#include "advios.h"

void advios::pulse()
{
	uint32_t counter = 0;
	while (true)
	{
		//if (++counter >= 1/(2*(CLOCK_PERIOD*10^(-9))))
		if (++counter >= 50000000)
		{
			counter = 0;
			secPulse = !secPulse;
			//secPulse.write(!secPulse.read());
		}
		wait();
	}
}

void advios::led_ctrl()
{
	
	bool lastPulse = secPulse;
	
	while (true)
	{
		if (!lastPulse && secPulse)
		{
			if (ctrl.read())
			{
				outLeds.write(ctrl.read() & inSwitch.read());
			}
			else
			{
				outLeds.write(secCounter);
				secCounter++;
			}
		}
		lastPulse = secPulse;
		wait();
	}
}
