#include "operational.h"

operational::operational()
{
}

operational::~operational()
{
}

void operational::handleCommand(Command* cmd)
{
	cmd->Execute(this, _state);
}
