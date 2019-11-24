#include "stop.h"

void stop::Execute(operational* context, operationalState* state)
{
	state->Stop(context);
}
