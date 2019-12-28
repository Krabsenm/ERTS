#pragma once
#include "Command.h"
#include "Controller.h"

class Stop :
	public Command
{
public:
	Stop() : _evt{stop} {}

	void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl, _evt);
	}

	
private:
	events _evt;

};

