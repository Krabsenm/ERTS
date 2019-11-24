#include "exit.h"

void Exit::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Exit(context);
}
