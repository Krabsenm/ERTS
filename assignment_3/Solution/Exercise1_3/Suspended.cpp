#include "Suspended.h"
#include "Ready.h"
#include "RealTimeLoop.h"

Suspended* Suspended::_instance = 0;

Suspended* Suspended::Instance()
{
	if (_instance == 0)
		_instance = new Suspended;

	return _instance;
}

std::string Suspended::Name()
{
	return std::string("Suspended");
}

void Suspended::Stop(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Ready::Instance());
}

void Suspended::Resume(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, RealTimeLoop::Instance());
}
