#pragma once
#include "state1.h"

class Initializing : 
public state1
{
public:
	
	static Initializing* getInstance();
	virtual	void handle(context* myself);

protected:
	Initializing();
private:
	static Initializing* _instance; 
};


