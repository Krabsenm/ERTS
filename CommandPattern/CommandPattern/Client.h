#pragma once
#include "operational.h"
#include "configurationEnded.h"
#include "start.h"
#include "resume.h"
#include "stop.h"
#include "suspend.h"
#include "configure.h"

class Client
{
public:
	Client(operational* op) { _operational = op;  };
	void Configure() { _operational->handleCommand(new configure); };
	void ConfigurationEnded() { _operational->handleCommand(new configurationEnded); };
	void Start() { _operational->handleCommand(new start); };
	void Stop() { _operational->handleCommand(new stop); };
	void Suspend() { _operational->handleCommand(new suspended); };
	void Resume() { _operational->handleCommand(new resume); };
private:
	operational* _operational;
};

