#pragma once
#include "Operational.h"
class RealTimeLoop :
	public Operational
{
public:
	static RealTimeLoop* Instance();
	virtual std::string Name();

	// Events
	virtual void Stop(EmbeddedSystemX* pESX);
	virtual void Suspend(EmbeddedSystemX* pESX);
		
protected:
	RealTimeLoop() {};

private:
	static RealTimeLoop* _instance;
};

