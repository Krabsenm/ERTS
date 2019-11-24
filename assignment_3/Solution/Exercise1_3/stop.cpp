#include "stop.h"

void stop::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Stop(context);
}
