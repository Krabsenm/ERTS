#ifndef _IOS_
#define _IOS_

#include <systemc.h>

#define NUM_BITS 4

SC_MODULE(iosc) {

	//Ports
	sc_in <bool> clk;
	sc_in <bool> reset;
	sc_in<sc_uint<NUM_BITS> > ctrl;
	sc_in<sc_uint<NUM_BITS> > inSwitch;
	sc_out<sc_uint<NUM_BITS> > outLeds;

	//Variables
	sc_uint<NUM_BITS> switchs;

	sc_uint<1> secPulse;
	sc_uint<NUM_BITS> secCounter;
	sc_uint<32> counter_clk;

	//Process Declaration
	void iosThread();
	void iosPulseThread();
	//Constructor
	SC_CTOR(iosc) {

		//init variables
		secPulse = 0;
		secCounter = 0;
		counter_clk = 0;

		//Process Registration
		SC_CTHREAD(iosThread, clk.pos());
		reset_signal_is(reset,true);

		//Process Registration
		SC_CTHREAD(iosPulseThread, clk.pos());
		reset_signal_is(reset,true);

	}
};

#endif
