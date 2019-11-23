#include "operational.h"

Operational::Operational()
{
}

Operational::~Operational()
{
}

void Operational::handleCommand(Command* cmd)
{
	cmd->Execute(this, _state);
}
