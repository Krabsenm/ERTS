#pragma once
#include <systemc.h>
#include "AvalonST.h"

class Master : public sc_module
{
	SC_HAS_PROCESS(Master);

public:
	sc_fifo_out<int> out;

public:
	Master(sc_module_name name) :
		sc_module(name)
	{
		SC_THREAD(write);
	}

private:
	void write();
}; 

