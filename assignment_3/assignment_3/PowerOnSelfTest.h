#pragma once
#include "state1.h"

class PowerOnSelfTest :
	public state1
{
public:

	static PowerOnSelfTest* getInstance();
	virtual	void handle(context* myself);
protected:
	PowerOnSelfTest();
private:
	bool systemSelfTest(); 
	static PowerOnSelfTest* _instance;

};

