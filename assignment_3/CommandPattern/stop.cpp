#include "stop.h"

void stop::Execute(operational* context, OperationalState* state)
{
	state->Stop(context);
}
