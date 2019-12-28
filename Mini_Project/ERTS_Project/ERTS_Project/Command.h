#pragma once
#include "global.h"

class Controller;
class Command
{
public:
	virtual ~Command() {};
	virtual void execute(Controller*) = 0;

protected:
	Command() {};

};

