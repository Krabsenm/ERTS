#pragma once
#include <systemc.h>
#include "AvalonST.h"

class AvalonSTSink : public sc_module
{
	SC_HAS_PROCESS(AvalonSTSink);

public:
	// Clock and reset
	sc_in_clk clock; // Clock
	sc_in<sc_logic> reset; // Reset

	// Handshake ports for ST bus
	sc_out<sc_logic> ready; // Ready signal
	sc_in<sc_logic> valid; // Valid signal

	// Channel, error and data ports ST bus
	sc_in<sc_int<CHANNEL_BITS> > channel;
	sc_in<sc_int<ERROR_BITS> > error;
	sc_in<sc_int<DATA_BITS> > data;

private:
	// File name for data saving
	const std::string m_file_name;
	ofstream* output_file;

public:
	AvalonSTSink(sc_module_name name, std::string file_name) :
		sc_module(name),
		m_file_name(file_name) 
	{
		SC_THREAD(read);
	}

	~AvalonSTSink()
	{
		if (output_file) delete output_file;
	} 



private:
	void read();
};