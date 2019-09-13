#pragma once
#include <systemc.h>
#include "AvalonST.h"

SC_MODULE(AvalonSTSource) {
public:
	// Clock and reset
	sc_in_clk clock; // Clock
	sc_in<sc_logic> reset; // Reset

	// Handshake ports for ST bus
	sc_in<sc_logic> ready; // Ready signal
	sc_out<sc_logic> valid; // Valid signal

	// Channel, error and data ports ST bus
	sc_out<sc_int<CHANNEL_BITS> > channel;
	sc_out<sc_int<ERROR_BITS> > error;
	sc_out<sc_int<DATA_BITS> > data;

public:
	SC_CTOR(AvalonSTSource) {
		SC_THREAD(write);
	}

private:
	void write();
};