#pragma once
#include "Command.h"
#include "Controller.h"
class Pass :
	public Command
{
public:
	Pass() : _evt{pass} {}

	void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl, _evt);
	}


private:
	events _evt;
};

