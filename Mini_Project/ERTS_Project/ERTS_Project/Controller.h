#pragma once
#include "State.h"

class Controller
{
public:
	Controller();
	~Controller();

	void handleCommand(Command* cmd);
	
private:
	State* _pState; 
	void ChangeState(State*);
	
};


