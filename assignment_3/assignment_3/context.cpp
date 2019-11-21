#include "context.h"
#include "PowerOnSelfTest.h"

#include <iostream>

context::context()
{
	_state = PowerOnSelfTest::getInstance(); 
}

void context::handle()
{
	_state->handle(this); 
}

void context::changeState(state1* newState)
{
	_state = newState;
	std::cout << "state transition" << std::endl; 
}


