#pragma once
#include "operational.h"

class OperationalState
{
public: 
	void configure(operational* context);
	void ConfigurationEnded(operational* context);
	void Start(operational* context);
	void Stop(operational* context);
	void Suspend(operational* context);
	void Resume(operational* context);
};

