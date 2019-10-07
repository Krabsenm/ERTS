#include "Monitor.h"

void Monitor::print()
{
	sc_uint<NUM_BITS> lastState = leds;
	std::cout << "Monitor active!" << std::endl;

	while (true)
	{
		if (lastState != leds)
		{
			std::cout << sc_time_stamp() << ": " << leds << std::endl;
		}
		lastState = leds;
		wait();
	}
}