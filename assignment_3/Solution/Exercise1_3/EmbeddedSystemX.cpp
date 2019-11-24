#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"

EmbeddedSystemX::EmbeddedSystemX(): Name("systemX")
{
	_state = PowerOnSelfTest::Instance();
	_state->Entry();
	VersionNo = 1; 
}

void EmbeddedSystemX::SelftestOk()
{
	_state->SelftestOk(this);
}

void EmbeddedSystemX::Initialized()
{
	_state->Initialized(this);
}

void EmbeddedSystemX::Restart()
{
	_state->Restart(this);
}

void EmbeddedSystemX::Configure()
{
	_state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded()
{
	_state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Exit()
{
	_state->Exit(this);
}

void EmbeddedSystemX::Stop()
{
	_state->Stop(this);
}

void EmbeddedSystemX::Start()
{
	_state->Start(this);
}

void EmbeddedSystemX::Suspend()
{
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume()
{
	_state->Resume(this);
}

void EmbeddedSystemX::SelftestFailed(int ErrorNo)
{
	_state->SelftestFailed(this, ErrorNo);
}

void EmbeddedSystemX::handleCommand(command* cmd)
{
	cmd->Execute(this, _state); 
	delete cmd; 
}

void EmbeddedSystemX::ChangeState(EmbeddedSystemState* pState)
{
	_state = pState;
}
