#pragma once
#include "Command.h"
#include "Controller.h"
class Feature :
	public Command
{
public:
	Feature() : _evt{ corner } {}

	void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl, _evt);
	}

	
private:
	events _evt;

};
