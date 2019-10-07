#pragma once
#include <systemc.h>
#include "advios_def.h"
SC_MODULE(Monitor)
{
	sc_in<bool> clock;
	sc_in<sc_uint<NUM_BITS>> leds;

	void print();

	SC_CTOR(Monitor)
	{
		SC_THREAD(print);
		sensitive << clock.neg();
		dont_initialize();
	}
};

