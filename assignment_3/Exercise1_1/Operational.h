#pragma once
#include "EmbeddedSystemState.h"
class Operational :
	public EmbeddedSystemState
{
public:
	static Operational* Instance();
	virtual std::string Name();

	// Events
	virtual void Restart(EmbeddedSystemX* pESX);

protected:
	Operational() {};
private:
	static Operational* _instance;
};

