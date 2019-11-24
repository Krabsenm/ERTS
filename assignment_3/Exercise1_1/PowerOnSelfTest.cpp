#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

PowerOnSelfTest* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest* PowerOnSelfTest::Instance()
{
	if (_instance == 0)
		_instance = new PowerOnSelfTest;

	return _instance;
}

std::string PowerOnSelfTest::Name()
{
	return std::string("PowerOnSelfTest");
}

void PowerOnSelfTest::SelftestOk(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Initializing::Instance());
}

void PowerOnSelfTest::SelftestFailed(EmbeddedSystemX* pESX, int ErrorNo)
{
	Failure* pState = Failure::Instance();
	pState->SetErrorNo(ErrorNo);
	ChangeState(pESX, pState);
}

void PowerOnSelfTest::Entry()
{
	SystemSelftest();
}

void PowerOnSelfTest::SystemSelftest()
{
	std::cout << this->Name() << ": Running function: SystemSelftest()" << std::endl;
}