#include "Controller.h"
#include "Initialize.h"
#include <thread>
#include <mutex>
#include "Initialized.h"
#include "Stopped.h"
#include "Pass.h"


Controller::Controller()
{
	_pVP = nullptr; 
	running = true; 
	_pState =  Initialize::Instance();
	_pState->entry(this) ;
}

Controller::~Controller()
{
	
}


void Controller::handleCommand(Command* cmd)
{
	cmd->execute(this);
	delete cmd;
}

void Controller::ChangeState(State* pState)
{
	_pState = pState;
	_pState->entry(this); 
}


State* Controller::getStateHandle()
{
	return _pState; 
}

state Controller::getState()
{
	std::lock_guard<std::mutex> lock(_stateLock);

	return _pState->getStateId(); 
}


VideoProcessor* Controller::getVideoProcesor()
{
	return _pVP; 
}

void Controller::setVideoProcesor(VideoProcessor* vp)
{
	_pVP = vp;
}

bool Controller::isRunning()
{
	return running; 
}

void Controller::setRunning(bool run)
{
	running = run; 
}