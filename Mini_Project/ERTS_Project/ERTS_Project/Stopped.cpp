#include "Stopped.h"
#include "Initialize.h"
#include "Controller.h"
#include <iostream>

Stopped* Stopped::_instance = 0;

Stopped* Stopped::Instance()
{
	if (_instance == 0)
		_instance = new Stopped;

	return _instance;
}

void Stopped::handle(Controller* _pCtrl, events evt)
{

	switch (evt)
	{
	case restart:
		_pCtrl->ChangeState(Initialize::Instance());
		break;
	case stop:
		std::cout << "exit program" << std::endl; 
		_pCtrl->setRunning(false); 
		break;
	default:
		break;
	}
}

void Stopped::entry(Controller* _pCtrl)
{
	delete _pCtrl->getVideoProcesor();
	std::cout << "stopped" << std::endl; 
}

Stopped::Stopped() : State(stopped)
{
}
