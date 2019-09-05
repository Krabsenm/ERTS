#pragma once
#include <systemc.h>

SC_MODULE(ModuleSingle) {

	SC_CTOR(ModuleSingle) {
		SC_THREAD(moduleSingleThread);
		SC_METHOD(moduleSingleMethod);
		sensitive << event_a; // static sensitivity declaration 
		dont_initialize();
	}
	void moduleSingleThread(void);
	void moduleSingleMethod(void);

	sc_event event_a;
	sc_uint<4> counter = 0;
};
