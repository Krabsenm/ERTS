#pragma once
#include "EmbeddedSystemState.h"

class EmbeddedSystemX
{
private:
	int VersionNo;
	char* Name;
	bool _running = true;

public:
	EmbeddedSystemX();
	void Close() { _running = false; }
	bool isRunning() { return _running; }

	// Event triggers
	void SelftestOk();
	void Initialized();
	void Restart();
	void Configure();
	void ConfigurationEnded();
	void Exit();
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelftestFailed(int ErrorNo);

private:
	friend class EmbeddedSystemState;
	void ChangeState(EmbeddedSystemState*);
	EmbeddedSystemState* _state;
};

