#pragma once
#include "command.h"
class selfTestFailed :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};

