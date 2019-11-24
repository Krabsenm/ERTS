#pragma once
#include "command.h"

class configure : 
	public command
{
public:
	void Execute(EmbeddedSystemX*, EmbeddedSystemState*);

private:

};