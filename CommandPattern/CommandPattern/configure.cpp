#include "configure.h"


void configure::Execute(operational* context, operationalState* state)
{
	state->Configure(context);
}
