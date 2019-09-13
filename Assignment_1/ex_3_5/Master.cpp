#include "Master.h"

void Master::write()
{
	int counter = 0;

	while (true)
	{
		out.write(counter++);
		wait(1,SC_NS);
	}
}
