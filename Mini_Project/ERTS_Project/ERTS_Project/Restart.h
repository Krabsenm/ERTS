#pragma once
#include "Command.h"
#include "Controller.h"
class Restart :
	public Command
{
public:
	Restart() : _evt{restart } {}

	void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl, _evt);
	}

	
private:
	events _evt;

};

