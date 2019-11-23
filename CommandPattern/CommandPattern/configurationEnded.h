#pragma once
#include "command.h"
class configurationEnded :
	public command
{
public:
	void Execute(operational*  context, operationalState* state);
};

