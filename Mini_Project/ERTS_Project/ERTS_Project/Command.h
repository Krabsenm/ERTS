#pragma once
class Command
{
	
	virtual ~Command() {};
	virtual void execute() = 0;

protected:
	Command() {};
	
};

