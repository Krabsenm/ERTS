#pragma once
#include "EmbeddedSystemState.h"
class Initializing :
	public EmbeddedSystemState
{
public:
	static Initializing* Instance();
	virtual std::string Name();

	// Override
	void Entry();

	// Events
	virtual void Initialized(EmbeddedSystemX* pESX);

protected:
	Initializing() {};

private:
	static Initializing* _instance;
	void StartInitializing();
};

