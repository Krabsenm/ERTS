#pragma once
#include "state1.h"

class context
{
public:
	context(); 
	void handle();
	void changeState(state1* newState);
private:
	state1* _state; 
};

