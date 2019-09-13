#include "Producer.h"
#include "randomNumberGenerator.h"


void Producer::Producer_Thread(void)
{
	sc_uint<32> sequence_number = 0;

	while (1)
	{
		int randNum = getRandomNumber(2,10);
		wait(randNum, SC_MS);

#ifdef EX_3_3_2
		for (int i = 0; i < _fifo.size(); i++) 
		{ 
			TCPHeader* packet = new TCPHeader;
			packet->SequenceNumber = sequence_number;
			_fifo[i]->write(packet); 
		}
#else

		TCPHeader* packet = new TCPHeader;
		packet->SequenceNumber = sequence_number;
		_fifo.write(packet);

#endif // EX_3_3_2

		sequence_number++; 
	}
}


