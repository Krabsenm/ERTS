#pragma once
#include "EmbeddedSystemState.h"
class Failure :
	public EmbeddedSystemState
{
public:
	static Failure* Instance();
	virtual std::string Name();
	void SetErrorNo(int);

	// Override
	virtual void Entry();

	// Events
	virtual void Restart(EmbeddedSystemX* pESX);
	virtual void Exit(EmbeddedSystemX* pESX);

protected:
	Failure() {};

private:
	static Failure* _instance;
	int _errorNo = 0;

	void Display(int ErrorNo);

};

