#include "Operational.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"

Operational* Operational::_instance = 0;

Operational* Operational::Instance()
{
	return Ready::Instance();
}

std::string Operational::Name()
{
	return std::string("Operational");
}

void Operational::Restart(EmbeddedSystemX* pESX)
{
	EmbeddedSystemState::ChangeState(pESX, PowerOnSelfTest::Instance());
}
