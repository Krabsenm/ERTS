#include <systemc.h>
#include "ModuleSingle.h"

int sc_main(int argc, char* argv[]) {
	// Initialize modules
	ModuleSingle my_instance("my_instance");

	// Connect modules


	// Start simulation
	sc_start(200, SC_MS);
	return 0;
}


