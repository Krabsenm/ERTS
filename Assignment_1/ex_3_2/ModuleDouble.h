#pragma once
#include <systemc.h>

SC_MODULE(ModuleDouble) {

	SC_CTOR(ModuleDouble) {
		SC_THREAD(A_Thread);
		SC_THREAD(B_Thread);
		SC_METHOD(a_method);
	}

	void A_Thread(void);
	void B_Thread(void);
	void a_method(void);

	sc_event event_A, event_B, event_Aack, event_Back;
	sc_uint<4> counter = 0;

};