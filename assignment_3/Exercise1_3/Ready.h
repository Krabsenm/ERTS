#pragma once
#include "Operational.h"
class Ready :
	public Operational
{
public:
	static Ready* Instance();
	virtual std::string Name();

	// Events
	virtual void Configure(EmbeddedSystemX* pESX);
	virtual void Start(EmbeddedSystemX* pESX);

protected:
	Ready() {};

private:
	static Ready* _instance;
};

