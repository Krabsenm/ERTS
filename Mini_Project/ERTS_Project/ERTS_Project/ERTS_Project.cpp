#include <iostream>
#include "Controller.h"
#include "Command.h"
#include "Initialized.h"
#include "Edge.h"
#include "Pass.h"
#include "Feature.h"
#include "Stop.h"
#include "Restart.h"

int main()
{
	std::cout << "Trigger Events as: " << std::endl;
	std::cout << "1:  initialized" << std::endl;
	std::cout << "2:  edge" << std::endl;
	std::cout << "3:  pass" << std::endl;
	std::cout << "4:  corner" << std::endl;
	std::cout << "5:  stop" << std::endl;
	std::cout << "6:  restart" << std::endl;
	
	Controller system;
	Command* pCmd = nullptr;
	while (system.isRunning())
	{
		char keypress;
		std::cin >> keypress;
		switch (keypress)
		{
		case '1':
			pCmd = new Initialized;
			break;

		case '2':
			pCmd = new Edge;
			break;

		case '3':
			pCmd = new Pass;
			break;

		case '4':
			pCmd = new Feature;
			break;

		case '5':
			pCmd = new Stop;
			break;

		case '6':
			pCmd = new Restart;
			break;

		default:
			break;
		}
		if (pCmd != nullptr)
			system.handleCommand(pCmd);
	}
}

