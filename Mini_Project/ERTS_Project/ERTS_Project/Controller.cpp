#include "Controller.h"
#include "Initialize.h"


Controller::Controller()
{
	_pState = Initialize::Instance();
}

Controller::~Controller()
{
}


void Controller::handleCommand(Command* cmd)
{
	cmd->execute(this);
	delete cmd;
}

void Controller::ChangeState(State* pState)
{
	_pState = pState;
}
