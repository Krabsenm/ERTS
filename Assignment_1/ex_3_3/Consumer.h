#pragma once
#include <systemc.h>
#include "TCPHeader.h"

SC_MODULE(Consumer) {

	sc_fifo_in<TCPHeader*> _fifo;

	SC_CTOR(Consumer) {
		SC_THREAD(Consumer_Thread);
		//SC_METHOD(a_method);
	}

// threads and methods
// Threads of exevution in module  
	void Consumer_Thread(void);

// terminatable methods
//	void a_method(void);

// attributes 

public:
	int myId;

};