#include "AvalonSTSource.h"

void AvalonSTSource::write()
{
	sc_int<DATA_BITS> counter = 0;

	while (true)
	{
		if (reset == SC_LOGIC_0)
		{
			// Output sample data on negative edge of clock
			while (ready == SC_LOGIC_0) 
			{
				wait(clock.posedge_event());
				valid.write(SC_LOGIC_0);
			}

			wait(clock.posedge_event());
			data.write(counter++);
			channel.write(0);         // Channel number
			error.write(0);           // Error
			valid.write(SC_LOGIC_1);  // Signal valid new data
		}
		else wait(clock.posedge_event());
	}
}
