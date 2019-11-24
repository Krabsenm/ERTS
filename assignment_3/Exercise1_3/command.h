#pragma once
#include "EmbeddedSystemX.h"
#include "EmbeddedSystemState.h"
class EmbeddedSystemX;
class EmbeddedSystemState;

class command
{
public:
	virtual ~command() {};
	virtual void Execute(EmbeddedSystemX*, EmbeddedSystemState*) = 0; 

protected:
	command() {};

private:

};

