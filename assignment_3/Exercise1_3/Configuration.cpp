#include "Configuration.h"
#include "Ready.h"

Configuration* Configuration::_instance = 0;

Configuration* Configuration::Instance()
{
	if (_instance == 0)
		_instance = new Configuration;

	return _instance;
}

std::string Configuration::Name()
{
	return std::string("Configuration");
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* pESX)
{
	ChangeState(pESX, Ready::Instance());
}
