#include "ModuleDouble.h"

void ModuleDouble::A_Thread(void)
{
	wait(SC_ZERO_TIME);
	while (true)
	{
		// notify every 3 ms
		event_A.notify(3, SC_MS);
		wait(3,SC_MS, event_Aack); 
	}
}

void ModuleDouble::B_Thread(void)
{
	wait(SC_ZERO_TIME);
	while (true)
	{
		// notify every 2 ms
		event_B.notify(2, SC_MS);
		wait(2, SC_MS, event_Back);
	}
}
	
void ModuleDouble::a_method(void)
{
	
	// wait for next event A
	next_trigger(event_A);
	std::cout << sc_time_stamp() << " event A" << std::endl; 
	event_Aack.notify(); 


	// wait for next event B
	next_trigger(event_B);
	std::cout << sc_time_stamp() << " event B" << std::endl;
	event_Back.notify();

}