#include "Configure.h"


void Configure::Execute(Operational* context, OperationalState* state)
{
	state->configure(context);
}
