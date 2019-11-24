#pragma once
#include "command.h"
class configurationEnded :
	public command
{
public:
	void Execute(EmbeddedSystemX*  context, EmbeddedSystemState* state);
};

