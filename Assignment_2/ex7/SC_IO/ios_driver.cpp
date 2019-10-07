#include "ios_driver.h"

void ios_driver::test() {

	//Variables
	sc_uint<4> sw_test;
	sc_uint<4> ctrl_allpass, ctrl_filter;
	sc_uint<4> led_result;

	//Initialization
	sw_test = 0xf;
	ctrl_allpass = 0xf;
	ctrl_filter = 0x1;



	reset.write(true);
	wait();
	reset.write(false);
	wait();

	wait(170, SC_NS);

	ctrl.write(ctrl_allpass);
	outSwitch.write(sw_test);

	wait();
	wait();

	ctrl.write(ctrl_filter);

	wait();
	wait();

	led_result = inLeds.read();
	wait();

	if (ctrl_filter == led_result)
		retval = 0;
	else
		retval = 1;

}
