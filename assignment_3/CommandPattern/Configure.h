#pragma once
#include "command.h"
class Configure :
	public Command
{
};

class Configure : 
	public Command
{
public:
	Configure();
	~Configure();

	virtual void Execute(Operational*, OperationalState*);

private:

};