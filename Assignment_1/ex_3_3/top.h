#pragma once
#include <systemc.h>
#include "TCPHeader.h"
#include "Consumer.h"
#include "Producer.h"
#include "myDefines.h"

SC_MODULE(top) {

	sc_fifo<TCPHeader*> _fifo; 
	Consumer cons;
	Producer prod;

#ifdef EX_3_3_2
	sc_fifo<TCPHeader*> _fifo2;
	Consumer cons2;

	SC_CTOR(top) :cons("cons"), cons2("cons2"), prod("prod") {

		cons.myId = 1; 
		cons2.myId = 2;

		cons._fifo(_fifo);
		cons2._fifo(_fifo2);

		prod._fifo(_fifo);
		prod._fifo(_fifo2); 
	}
#else

	SC_CTOR(top) :cons("cons"), prod("prod") {
		cons.myId = 1;
		cons._fifo(_fifo);
		prod._fifo(_fifo);
	}

#endif // EX_3_3_2


// threads and methods
// Threads of exevution in module  
//	void A_Thread(void); 

// terminatable methods
//	void a_method(void);

// attributes 

};