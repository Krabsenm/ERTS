#pragma once
#include "State.h"
class Initialize :
	public State
{
public:	
	static Initialize* Instance();
	void handle(Command*) override;
	
protected:
	Initialize() {}


private:
	static Initialize* _instance;

	void perform_initialization();
};

