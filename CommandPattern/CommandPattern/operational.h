#pragma once
#include "command.h"
#include "operationalState.h"
class command;

class operational
{
	//friend class command;
public:
	operational();
	~operational();

	void handleCommand(command* cmd); 

private:
	operationalState* _state; 
};
