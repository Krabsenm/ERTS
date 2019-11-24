#include "Ready.h"
#include "Configuration.h"
#include "RealTimeLoop.h"

Ready* Ready::_instance = 0;

Ready* Ready::Instance()
{
	if (_instance == 0)
		_instance = new Ready;

	return _instance;
}

std::string Ready::Name()
{
	return std::string("Ready");
}

void Ready::Configure(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Configuration::Instance());
}

void Ready::Start(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, RealTimeLoop::Instance());
}
