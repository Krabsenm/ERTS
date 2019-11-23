#pragma once
#include "command.h"

class Configure : 
	public Command
{
public:
	Configure();
	~Configure();

	void Execute(operational*, OperationalState*);

private:

};