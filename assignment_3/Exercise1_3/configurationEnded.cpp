#include "configurationEnded.h"


void configurationEnded::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->ConfigurationEnded(context);
}
