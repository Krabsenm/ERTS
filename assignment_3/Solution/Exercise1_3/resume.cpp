#include "resume.h"

void resume::Execute(EmbeddedSystemX * context, EmbeddedSystemState* state)
{
	state->Resume(context);
}
