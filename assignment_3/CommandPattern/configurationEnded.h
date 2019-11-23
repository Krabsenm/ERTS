#pragma once
#include "command.h"
class ConfigurationEnded :
	public Command
{
public:
	void Execute(operational*  context, OperationalState* state);
};

