#include "initialized.h"

void initialized::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->Initialized(context);
}
