#include "Consumer.h"

void Consumer::Consumer_Thread(void)
{
	TCPHeader* tcp_handle; 

	while (1)
	{
		 tcp_handle = _fifo.read();

		 std::cout << "Consumer ID: " << myId << " Current time: " << sc_time_stamp() << "sequence number: " << tcp_handle->SequenceNumber << std::endl; 

		 // crean up
		 delete tcp_handle; 
	}
}