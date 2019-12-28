#include <iostream>
#include "CornerDetection.h"
#include "EdgeDetection.h"
#include "Passthrough.h"
#include "Controller.h"
#include "Stopped.h"

CornerDetection* CornerDetection::_instance = 0;

CornerDetection* CornerDetection::Instance()
{
	if (_instance == 0)
		_instance = new CornerDetection;

	return _instance;
}

void CornerDetection::handle(Controller* _pCtrl, events evt)
{
	
	switch (evt)
	{
	case pass:
		_pCtrl->ChangeState(Passthrough::Instance());
		break;
	case edge:
		_pCtrl->ChangeState(EdgeDetection::Instance());
		break;
	case stop:
		_pCtrl->ChangeState(Stopped::Instance());
		break;
	default:
		break;
	}
}

void CornerDetection::entry(Controller* _pCtrl)
{
	std::cout << "perform corner detection" << std::endl; 
}

CornerDetection::CornerDetection() : Running(cornerdetection)
{
}
