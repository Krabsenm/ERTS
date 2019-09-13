#include <systemc.h>
#include "Top.h"

int sc_main(int argc, char* argv[]) {
	// Initialize modules
	Top top("top");

	// Connect modules


	// Start simulation
	sc_start(500, SC_NS);
	return 0;
}


