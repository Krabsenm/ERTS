#pragma once
#include "Running.h"

class CornerDetection :
	public Running
{
public:
	static CornerDetection* Instance();
	void handle(Controller*, events) override;
	void entry(Controller* _pCtrl) override;

protected:
	CornerDetection();

private:
	static CornerDetection* _instance;

};
