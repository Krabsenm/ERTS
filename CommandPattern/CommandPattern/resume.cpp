#include "resume.h"

void resume::Execute(operational* context, operationalState* state)
{
	state->Resume(context);
}
