#include "operational.h"
#include "context.h"
#include "initializing.h"
#include <iostream>
#include "PowerOnSelfTest.h"

operational* operational::_instance = 0; 

operational::operational()
{
}

operational* operational::getInstance()
{
	
	if (_instance == 0)
		_instance = new operational;

	return _instance;
}

void operational::handle(context* myself)
{
	std::cout << "operational state" << std::endl;
	std::cout << "operational running" << std::endl;
	std::cout << "Restart press 1" << std::endl;

	int option = 0; 
	std::cin >> option; 
	if (option)
		myself->changeState(PowerOnSelfTest::getInstance()); 
}