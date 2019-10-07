#include "Stimulus.h"

void Stimulus::generate()
{
	ctrl.write(0);
	switches.write(0);

	wait(3, SC_SEC);

	ctrl.write(3);
	switches.write(8);

	wait();
}
