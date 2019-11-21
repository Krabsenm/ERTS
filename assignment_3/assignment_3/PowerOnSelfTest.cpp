#include "PowerOnSelfTest.h"
#include "context.h"
#include "initializing.h"
#include "failure.h"
#include <iostream>

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

PowerOnSelfTest* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest::PowerOnSelfTest()
{
}

bool PowerOnSelfTest::systemSelfTest()
{
	/* initialize random seed: */
	srand(time(NULL));

	// 0 or 1 50/50
	return rand() % 2;
}


PowerOnSelfTest* PowerOnSelfTest::getInstance()
{
	if (_instance == 0)
		_instance = new PowerOnSelfTest;
	return _instance;
}

void PowerOnSelfTest::handle(context* myself)
{
	bool fail = systemSelfTest(); 

	std::cout << "PowerOnSelfTest:" <<  (fail ? " it failed" : " it succeded") << std::endl;

	if (fail)
		myself->changeState(Initializing::getInstance());
	else
		myself->changeState(failure::getInstance());

}
