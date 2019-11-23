#include "resume.h"

void resume::Execute(operational* context, OperationalState* state)
{
	state->Resume(context);
}
