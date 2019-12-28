#pragma once
#include "State.h"
#include "Command.h"
#include <mutex>
#include "VideoProcessor.h"

class Controller
{
public:
	Controller();
	~Controller();

	void handleCommand(Command* cmd);
 
	State* getStateHandle();
	state getState(); 
	VideoProcessor* getVideoProcesor(); 
	void ChangeState(State*);

	
	bool isRunning(); 
	void setRunning(bool run);

private:
	State* _pState; 
	bool running;
	std::mutex _stateLock;
	VideoProcessor* _pVP;

};


