#pragma once
#include "Command.h"
#include "Controller.h"


class Edge :
	public Command
{
public:
	Edge() : _evt{edge} {}

    void execute(Controller* _ctrl) override
	{
		_ctrl->getStateHandle()->handle(_ctrl,_evt);
	}

private:
	events _evt;
};
