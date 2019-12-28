#pragma once
#include "Running.h"

class Passthrough :
	public Running
{
public:
	static Passthrough* Instance();
	void handle(Controller*, events) override;
	void entry(Controller* _pCtrl);
protected:
	Passthrough();

private:
	static Passthrough* _instance;

};