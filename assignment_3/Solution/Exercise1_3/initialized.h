#pragma once
#include "command.h"
class initialized :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};

