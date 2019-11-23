#pragma once
#include "operational.h"
#include <iostream>
using namespace std;
class operational;

class operationalState
{
	//friend class operational;
public: 

	void Configure(operational* context) { cout << "Configure" << endl; };
	void ConfigurationEnded(operational* context) { cout << "ConfigurationEnded" << endl; };
	void Start(operational* context) { cout << "Start" << endl; };
	void Stop(operational* context) { cout << "Stop" << endl; };
	void Suspend(operational* context) { cout << "Suspended" << endl; };
	void Resume(operational* context) { cout << "Resume" << endl; };
};

