#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"

RealTimeLoop* RealTimeLoop::_instance = 0;

RealTimeLoop* RealTimeLoop::Instance()
{
	if (_instance == 0)
		_instance = new RealTimeLoop;

	return _instance;
}

std::string RealTimeLoop::Name()
{
	return std::string("RealTimeLoop");
}

void RealTimeLoop::Stop(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Ready::Instance());
}

void RealTimeLoop::Suspend(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Suspended::Instance());
}
