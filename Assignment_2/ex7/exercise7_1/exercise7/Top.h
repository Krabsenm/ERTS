#pragma once
#include <systemc.h>
#include "advios.h"
#include "advios_def.h"
#include "Stimulus.h"
#include "Monitor.h"

class Top : public sc_module
{
	SC_HAS_PROCESS(Top);

	// Declare trace file pointer
	//sc_trace_file* tf;

	// Modules 
	advios dut;

	// Test Bench
	Stimulus stim;
	Monitor mon;


	// Signals - Avalon ST
	sc_clock clock; // Clock
	sc_signal<sc_logic> s_reset; // Reset
	sc_signal<sc_uint<NUM_BITS>> s_ctrl, s_inSwitch;
	sc_signal<sc_uint<NUM_BITS>> s_outLeds;

public:
	// Constructor
	Top(sc_module_name name) :
		sc_module(name),
		clock("clock", sc_time(CLOCK_PERIOD, SC_NS)),
		dut("dut"),
		stim("stim"),
		mon("mon")
	{
		// Dut
		dut.clock(clock);
		dut.reset(s_reset);
		dut.ctrl(s_ctrl);
		dut.inSwitch(s_inSwitch);
		dut.outLeds(s_outLeds);

		// Stimulus
		stim.clock(clock);
		stim.ctrl(s_ctrl);
		stim.switches(s_inSwitch);

		// Monitor
		mon.clock(clock);
		mon.leds(s_outLeds);

		// Setup trace
		//tf = sc_create_vcd_trace_file("WaveForm");
		//tf->set_time_unit(1, SC_NS); //optional
		//sc_trace(tf, clock, "clk");
		//sc_trace(tf, s_reset, "reset");
		//sc_trace(tf, s_ctrl, "ctrl");
		//sc_trace(tf, s_inSwitch, "switch");
		//sc_trace(tf, s_outLeds, "leds");

		// Set reset
		s_reset.write(SC_LOGIC_0);
	}

	~Top()
	{
		//sc_close_vcd_trace_file(tf);
	}
};