#include "Failure.h"
#include "PowerOnSelfTest.h"

Failure* Failure::_instance = 0;

Failure* Failure::Instance()
{
	if (_instance == 0)
		_instance = new Failure;

	return _instance;
}

std::string Failure::Name()
{
	return std::string("Failure");
}

void Failure::SetErrorNo(int no)
{
	_errorNo = no;
}

void Failure::Entry()
{
	Display(_errorNo);
}

void Failure::Restart(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, PowerOnSelfTest::Instance());
}

void Failure::Exit(EmbeddedSystemX* pESX)
{
	pESX->Close();
}

void Failure::Display(int ErrorNo)
{
	std::cout << this->Name() << ": Running function: Display()" << std::endl;
	std::cout << "Got error number: " << ErrorNo << std::endl;
}

