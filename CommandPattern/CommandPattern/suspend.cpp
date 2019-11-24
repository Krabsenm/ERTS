#include "suspend.h"

void suspended::Execute(operational* context, operationalState* state)
{
	state->Suspend(context);
}
