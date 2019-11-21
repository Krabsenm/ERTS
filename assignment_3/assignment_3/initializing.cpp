#include "initializing.h"
#include "context.h"
#include "operational.h"
#include "failure.h"
#include <iostream>

Initializing* Initializing::_instance = 0;

Initializing::Initializing()
{
}

void Initializing::handle(context* myself)
{
	std::cout << "initializing state handled" << std::endl;
	myself->changeState(operational::getInstance());
}


Initializing* Initializing::getInstance()
{
	if (_instance == 0)
		_instance = new Initializing;
	return _instance;
}
