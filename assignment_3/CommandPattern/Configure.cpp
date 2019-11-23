#include "Configure.h"


void Configure::Execute(operational* context, OperationalState* state)
{
	state->configure(context);
}
