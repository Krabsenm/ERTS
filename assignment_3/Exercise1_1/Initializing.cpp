#include "Initializing.h"
#include "Operational.h"

Initializing* Initializing::_instance = 0;

Initializing* Initializing::Instance()
{
	if (_instance == 0)
		_instance = new Initializing;

	return _instance;
}

std::string Initializing::Name()
{
	return std::string("Initializing");
}

void Initializing::Entry()
{
	StartInitializing();
}

void Initializing::Initialized(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Operational::Instance());
}

void Initializing::StartInitializing()
{
	std::cout << this->Name() << ": Running function: StartInitializing()" << std::endl;
}
