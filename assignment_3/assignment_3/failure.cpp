#include "failure.h"
#include "context.h"
#include "iostream"
#include "PowerOnSelfTest.h"
failure* failure::_instance = 0;

failure::failure()
{
}

failure* failure::getInstance()
{
	if (_instance == 0)
		_instance = new failure;
	return _instance;
}

void failure::handle(context* myself)
{
	std::cout << "Error no. 1" << std::endl;
	std::cout << "retry press 0, exit press 1" << std::endl; 

	int option = 0; 
	std::cin >> option; 

	if (option)
		exit(0);
	else
		myself->changeState(PowerOnSelfTest::getInstance()); 
}


