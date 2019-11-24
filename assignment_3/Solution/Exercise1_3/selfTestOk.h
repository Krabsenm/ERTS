#pragma once
#include "command.h"
class selfTestOk :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};

