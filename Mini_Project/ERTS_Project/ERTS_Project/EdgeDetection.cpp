#include "EdgeDetection.h"
#include "CornerDetection.h"
#include "Passthrough.h"
#include "Controller.h"
#include <iostream>
#include "Stopped.h"
#include "EdgeProcessor.h"

EdgeDetection* EdgeDetection::_instance = 0;

EdgeDetection* EdgeDetection::Instance()
{
	if (_instance == 0)
		_instance = new EdgeDetection;

	return _instance;
}

void EdgeDetection::handle(Controller* _pCtrl, events evt)
{
	switch (evt)
	{
	case pass:
		_pCtrl->ChangeState(Passthrough::Instance());
		break;
	case corner:
		_pCtrl->ChangeState(CornerDetection::Instance());
		break;
	case stop:
		_pCtrl->ChangeState(Stopped::Instance());
		break;
	default:
		break;
	}
}

void EdgeDetection::entry(Controller* _pCtrl)
{
	_pCtrl->getVideoProcesor()->setProcessor(new EdgeProcessor()); 
	std::cout << "perform edge detection... " << std::endl; 
}

EdgeDetection::EdgeDetection() : Running(edgedetection)
{
}

