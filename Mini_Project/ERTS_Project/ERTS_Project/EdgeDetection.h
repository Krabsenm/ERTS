#pragma once
#include "Running.h"

class EdgeDetection :
	public Running
{
public:
	static EdgeDetection* Instance();
	void handle(Controller*, events) override;
	void entry(Controller* _pCtrl) override;
protected:
	EdgeDetection();

private:
	static EdgeDetection* _instance;

};