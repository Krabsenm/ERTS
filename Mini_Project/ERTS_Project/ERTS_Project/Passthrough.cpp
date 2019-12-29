#include "EdgeDetection.h"
#include "CornerDetection.h"
#include "Passthrough.h"
#include "Controller.h"
#include <iostream>
#include "Stopped.h"
#include "PassthroughProcessor.h"

Passthrough* Passthrough::_instance = 0;

Passthrough* Passthrough::Instance()
{
	if (_instance == 0)
		_instance = new Passthrough;

	return _instance;
}

void Passthrough::handle(Controller* _pCtrl, events evt)
{ 
	
	switch (evt)
	{
	case edge:
		_pCtrl->ChangeState(EdgeDetection::Instance());
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

void Passthrough::entry(Controller* _pCtrl)
{
	_pCtrl->getVideoProcesor()->setProcessor(new PassthroughProcessor());
	std::cout << "video pass through " << std::endl; 
}

Passthrough::Passthrough() : Running(passthrough)
{
}
