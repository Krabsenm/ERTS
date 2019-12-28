#pragma once
#include "global.h"

class Controller;
class State
{
public:
	State(state id) : _state(id){}
	virtual ~State(){}

	virtual void handle(Controller*, events evt) = 0;
	virtual void entry(Controller* _pCtrl) = 0;
	state getStateId()
	{
		return _state;
	}

protected:
 	const state _state; 
};

