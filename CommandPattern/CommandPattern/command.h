#pragma once
#include "operational.h"
class operational;
class operationalState;

class command
{
	//friend class operational;
	//friend class operationalState;
public:
	virtual ~command() {};
	virtual void Execute(operational*, operationalState*) = 0; 

protected:
	command() {};

private:

};

