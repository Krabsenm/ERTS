#include "operational.h"

operational::operational()
{
	_state = new operationalState;
}

operational::~operational()
{
}

void operational::handleCommand(command* cmd)
{
	cmd->Execute(this, _state);
	delete cmd;
}
