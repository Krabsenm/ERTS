#pragma once
#include "Operational.h"
class Suspended :
	public Operational
{
public:
	static Suspended* Instance();
	virtual std::string Name();

	// Events
	virtual void Stop(EmbeddedSystemX* pESX);
	virtual void Resume(EmbeddedSystemX* pESX);

protected:
	Suspended() {};

private:
	static Suspended* _instance;
};

