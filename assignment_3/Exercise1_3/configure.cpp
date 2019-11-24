#include "configure.h"


void configure::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Configure(context);
}
