#pragma once
#include "State.h"

class Stopped :
	public State
{
public:
	static Stopped* Instance();
	void handle(Controller*, events) override;
	void entry(Controller* _pCtrl) override; 
protected:
	Stopped();

private:
	static Stopped* _instance;

};