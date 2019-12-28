#pragma once
#include "Command.h"
#include "Controller.h"
class Initialized :
	public Command
{
public: 
	Initialized() : _evt{initialized} {}

	void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl, _evt);
	}
	
private:
	events _evt;

};

