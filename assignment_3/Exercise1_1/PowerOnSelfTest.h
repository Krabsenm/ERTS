#pragma once
#include "EmbeddedSystemState.h"

class PowerOnSelfTest :
	public EmbeddedSystemState
{
public:
	static PowerOnSelfTest* Instance();
	virtual std::string Name();

	virtual void Entry();

	// Events
	virtual void SelftestOk(EmbeddedSystemX* pESX);
	virtual void SelftestFailed(EmbeddedSystemX* pESX, int ErrorNo);
	
protected:
	PowerOnSelfTest() {};

private:
	static PowerOnSelfTest* _instance;
	void SystemSelftest();
};

