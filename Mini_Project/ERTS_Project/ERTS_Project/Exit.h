#pragma once
#include "Command.h"
#include "Controller.h"
class Exit :
	public Command
{
public:
	Exit() : _evt{Exit} {}

	void execute(Controller* _ctrl)
	{
		_ctrl->getState()->handle(_ctrl, _evt);
	}


private:
	events _evt;

};


