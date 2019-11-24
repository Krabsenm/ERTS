#include "selfTestFailed.h"

void selfTestFailed::Execute(EmbeddedSystemX* context, EmbeddedSystemState* state)
{
	state->SelftestFailed(context, 42);
}
