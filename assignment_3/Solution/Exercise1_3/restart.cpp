#include "restart.h"

void restart::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Restart(context);
}
