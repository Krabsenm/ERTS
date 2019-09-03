#pragma once
#include <systemc.h>


SC_MODULE(ModuleSingle) {

	SC_CTOR(ModuleSingle) {
		SC_THREAD(moduleSingleThread);
		SC_METHOD(moduleSingleMethod);
	}
	void moduleSingleThread(void);
	void moduleSingleMethod(void);

	sc_event event_a;
	sc_uint<4> counter = 0;


};
