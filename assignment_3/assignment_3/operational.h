#pragma once
#include "state1.h"

class operational :
	public state1
{
public:
	static operational* getInstance(); 

    virtual	void handle(context* myself);
protected:
	operational();
private:
	static operational* _instance; 
};