#pragma once
#include "command.h"
#include "operationalState.h"
class operational
{
public:
	operational();
	~operational();

	void handleCommand(Command* cmd); 

private:
	OperationalState* _state; 
};
