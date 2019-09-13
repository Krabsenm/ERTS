#pragma once
#include <systemc.h>
#include "TCPHeader.h"
#include "myDefines.h"

SC_MODULE(Producer) {

#ifdef EX_3_3_2
	sc_port<sc_fifo_out_if<TCPHeader*>, 0> _fifo;
#else
	sc_fifo_out<TCPHeader*> _fifo;
#endif // EX_3_3_2

	SC_CTOR(Producer) {
		SC_THREAD(Producer_Thread);
	}

// Threads of execution in module  
	void Producer_Thread(void); 


};