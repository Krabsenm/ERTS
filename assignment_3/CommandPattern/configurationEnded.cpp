#include "configurationEnded.h"

void ConfigurationEnded::Execute(operational* context, OperationalState* state)
{
	state->ConfigurationEnded(context);
}
