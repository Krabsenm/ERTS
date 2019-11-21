#pragma once
#include "state1.h"

class failure : 
	public state1
{
public:

	static failure* getInstance();
	virtual	void handle(context* myself);
protected:
	failure();
private:
	static failure* _instance;

};

