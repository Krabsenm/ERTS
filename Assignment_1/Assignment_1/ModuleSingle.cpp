#include "ModuleSingle.h"


void ModuleSingle::moduleSingleThread()
{
	wait(SC_ZERO_TIME);
	while (true)
	{
		event_a.notify();
		wait(2, SC_MS); 
	}
}

void ModuleSingle::moduleSingleMethod()
{
		// increment counter
		counter++; 
			
		// print current count and simulation time
		std::cout << "count: "
			<< counter
			<< " time: "
			<< sc_time_stamp()
			<< std::endl;


		// wait for next event
		next_trigger(event_a);
}
