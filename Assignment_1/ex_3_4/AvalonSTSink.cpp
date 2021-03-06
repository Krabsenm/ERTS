#include "AvalonSTSink.h"

void AvalonSTSink::read()
{
	sc_logic fake_ready = SC_LOGIC_1;
	sc_int<DATA_BITS> result;

	// Open text file
	output_file = new ofstream(m_file_name.c_str());
	if (!output_file)
	{
		std::cout << "ERROR: Problem opening " << m_file_name << " for output." << endl;
		return;
	}

	// Implements Avalon ST Sink
	while (true)
	{
		if (reset == SC_LOGIC_0)
		{
			wait(clock.posedge_event());
			if (valid == SC_LOGIC_1)
			{
				// Read data to file
				result = data.read();
				*output_file << result << endl;

				// Change ready every 3 samples
				if (result % 3 == 0)
					fake_ready = SC_LOGIC_0;
			}
		}
		else wait(clock.posedge_event());

		// Change ready
		ready.write(fake_ready);
		fake_ready = SC_LOGIC_1;
	}
}

