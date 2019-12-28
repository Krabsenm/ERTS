#pragma once
#include "State.h"
#include "global.h"

class Initialize :
	public State
{
public:	
	static Initialize* Instance();
	void handle(Controller*, events) override;
	void entry(Controller* _pCtrl) override;

protected:
	Initialize();

private:
	static Initialize* _instance;
	
};

