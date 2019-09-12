#pragma once
#include <systemc.h>
#include "AvalonST.h"
#include "AvalonSTSink.h"
#include "AvalonSTSource.h"

class Top : public sc_module
{
	SC_HAS_PROCESS(Top);

	// Declare trace file pointer
	sc_trace_file* tf;

	// Modules - Avalon ST
	AvalonSTSource source;
	AvalonSTSink sink;

	// Signals - Avalon ST
	sc_clock clock; // Clock
	sc_signal<sc_logic> s_reset; // Reset
	sc_signal<sc_logic> s_ready; // Ready signal
	sc_signal<sc_logic> s_valid; // Valid signal
	sc_signal<sc_int<CHANNEL_BITS> > s_channel;
	sc_signal<sc_int<ERROR_BITS> > s_error;
	sc_signal<sc_int<DATA_BITS> > s_data;

public:
	// Constructor
	Top(sc_module_name name) : 
		sc_module(name),
		clock("clock", sc_time(CLK_PERIODE, SC_NS)),
		source("source"),
		sink("sink", std::string("output.txt"))
	{
		// Source
		source.clock(clock);
		source.reset(s_reset);
		source.ready(s_ready);
		source.valid(s_valid);
		source.channel(s_channel);
		source.error(s_error);
		source.data(s_data);

		// Sink
		sink.clock(clock);
		sink.reset(s_reset);
		sink.ready(s_ready);
		sink.valid(s_valid);
		sink.channel(s_channel);
		sink.error(s_error);
		sink.data(s_data);

		// Setup trace
		tf = sc_create_vcd_trace_file("WaveForm");
		tf->set_time_unit(1, SC_NS); //optional
		sc_trace(tf, clock,     "clk");
		sc_trace(tf, s_reset,   "reset");
		sc_trace(tf, s_ready,   "ready");
		sc_trace(tf, s_valid,   "valid");
		sc_trace(tf, s_channel, "channel");
		sc_trace(tf, s_error,   "error");
		sc_trace(tf, s_data,    "data");

		// Set reset
		s_reset.write(SC_LOGIC_0);
	}

	~Top()
	{
		sc_close_vcd_trace_file(tf);
	}
};

