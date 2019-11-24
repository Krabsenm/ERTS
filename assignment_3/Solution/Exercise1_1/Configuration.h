#pragma once
#include "Operational.h"
class Configuration :
	public Operational
{
public:
	static Configuration* Instance();
	virtual std::string Name();

	// Events
	virtual void ConfigurationEnded(EmbeddedSystemX* pESX);

protected:
	Configuration() {};

private:
	static Configuration* _instance;
};

