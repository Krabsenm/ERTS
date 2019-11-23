#include "configurationEnded.h"

void configurationEnded::Execute(operational* context, operationalState* state)
{
	state->ConfigurationEnded(context);
}
