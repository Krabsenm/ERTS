#pragma once
#include <systemc.h>
#include "advios_def.h"

SC_MODULE(Stimulus)
{
public:
	sc_in<bool> clock;
	sc_out<sc_uint<NUM_BITS>> ctrl, switches;

	void generate();

	SC_CTOR(Stimulus)
	{
		SC_THREAD(generate);
		sensitive << clock.pos();
	}
};

