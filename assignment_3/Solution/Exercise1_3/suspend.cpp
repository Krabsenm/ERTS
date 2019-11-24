#include "suspend.h"

void suspended::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Suspend(context);
}
