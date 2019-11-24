#pragma once
#include "command.h"
class Exit :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};

