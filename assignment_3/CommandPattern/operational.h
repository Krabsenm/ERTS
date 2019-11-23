#pragma once
#include "command.h"
#include "operationalState.h"
class Operational
{
public:
	Operational();
	~Operational();

	void handleCommand(Command* cmd); 

private:
	OperationalState* _state; 
};
