#include "suspend.h"

void suspended::Execute(operational* context, OperationalState* state)
{
	state->Suspend(context);
}
