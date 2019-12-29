#include "Initialize.h"
#include "Passthrough.h"
#include "Controller.h"
#include <iostream>
#include "Initialized.h"
#include "PassthroughProcessor.h"

Initialize* Initialize::_instance = 0;

Initialize* Initialize::Instance()
{
	if (_instance == 0)
		_instance = new Initialize;

	return _instance;
}


void Initialize::handle(Controller* _pCtrl, events evt)
{

	//if (_pCtrl->getVideoProcesor() == nullptr)
	//	entry(_pCtrl); 
	
}

void Initialize::entry(Controller* _pCtrl)
{
	_pCtrl->setVideoProcesor(new VideoProcessor(_pCtrl, new PassthroughProcessor()));
	std::cout << "initialize..." << std::endl;
	_pCtrl->ChangeState(Passthrough::Instance());
}

Initialize::Initialize() : State(initialize)
{
}

