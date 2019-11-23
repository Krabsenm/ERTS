#pragma once
#include "operational.h"
#include "operationalState.h"
class Command
{
public:

	virtual ~Command();

	virtual void Execute(Operational*, OperationalState*) = 0; 

protected:
	Command();

private:

};

