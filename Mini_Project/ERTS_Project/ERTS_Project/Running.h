#pragma once
#include "State.h"

class Running :
	public State
{
public:
	static Running* Instance();

	virtual void handle(Controller*, events) = 0;
	virtual void entry(Controller* _pCtrl) = 0; 
	virtual ~Running() {}
protected:
	Running(state id) : State(id)  {}

};

