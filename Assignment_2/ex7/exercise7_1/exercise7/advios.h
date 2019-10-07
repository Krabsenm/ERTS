#pragma once
#include <systemc.h>
#include "advios_def.h"

class advios : public sc_module
{
	SC_HAS_PROCESS(advios);

public:
	sc_in_clk clock;
	sc_in<sc_logic> reset;
	
	sc_in<sc_uint<NUM_BITS>> ctrl, inSwitch;
	
	sc_out<sc_uint<NUM_BITS>> outLeds;

public:
	advios(sc_module_name name) :
		sc_module(name)
	{
		secPulse = 0;

		SC_CTHREAD(pulse, clock.pos());
		SC_CTHREAD(led_ctrl,clock.pos());
	}

private:
	sc_signal<bool> secPulse;
	sc_uint<NUM_BITS> secCounter = 0;
private:
	
	void pulse();
	void led_ctrl();
};

