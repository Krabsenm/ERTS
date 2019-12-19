#include "Initialize.h"

Initialize* Initialize::_instance = 0;

Initialize* Initialize::Instance()
{
	if (_instance == 0)
		_instance = new Initialize;

	return _instance;
}


void Initialize::handle()
{
	
}

void Initialize::perform_initialization()
{
}
