#pragma once
#include "Command.h"

class State
{
public:
	State(){}
	virtual ~State(){}

	virtual void handle(Command*) = 0; 
	
};

