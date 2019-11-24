#pragma once
#include <iostream>
#include <string>
#include "EmbeddedSystemX.h"

class EmbeddedSystemState
{
	friend class EmbeddedSystemX;
public:
	virtual void SelftestOk(EmbeddedSystemX* pESX){};
	virtual void Initialized(EmbeddedSystemX* pESX){};
	virtual void Restart(EmbeddedSystemX* pESX){};
	virtual void Configure(EmbeddedSystemX* pESX){};
	virtual void ConfigurationEnded(EmbeddedSystemX* pESX){};
	virtual void Exit(EmbeddedSystemX* pESX){};
	virtual void Stop(EmbeddedSystemX* pESX){};
	virtual void Start(EmbeddedSystemX* pESX){};
	virtual void Suspend(EmbeddedSystemX* pESX){};
	virtual void Resume(EmbeddedSystemX* pESX){};
	virtual void SelftestFailed(EmbeddedSystemX* pESX, int ErrorNo) {};
	
	virtual std::string Name() = 0;

protected:
	EmbeddedSystemState() {}
	void ChangeState(EmbeddedSystemX* pESX, EmbeddedSystemState*);
	virtual void Entry(){};
};

