#pragma once
#include "command.h"

class configure : 
	public command
{
public:
	void Execute(operational*, operationalState*);

private:

};