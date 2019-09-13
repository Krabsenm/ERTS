#include <systemc.h>
#include "top.h"

int sc_main(int argc, char* argv[]) {
	
	// Initialize modules
	top top("top");
	
	// Start simulation
	sc_start(200, SC_MS);
	return 0;
}