// Exercise1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EmbeddedSystemX.h"
#include "selfTestOk.h"
#include "selfTestFailed.h"
#include "command.h"
#include "start.h"
#include "restart.h"
#include "resume.h"
#include "stop.h"
#include "exit.h"
#include "configure.h"
#include "suspend.h"
#include "configurationEnded.h"
#include "initialized.h"
	
int main()
{
	std::cout << "Trigger Events as: " << std::endl;
	std::cout << "1:  SelftestOk" << std::endl;
	std::cout << "2:  Initialized" << std::endl;
	std::cout << "3:  Restart" << std::endl;
	std::cout << "4:  Configure" << std::endl;
	std::cout << "5:  ConfigurationEnded" << std::endl;
	std::cout << "6:  Exit" << std::endl;
	std::cout << "7:  Stop" << std::endl;
	std::cout << "8:  Start" << std::endl;
	std::cout << "9:  Suspend" << std::endl;
	std::cout << "a:  Resume" << std::endl;
	std::cout << "b:  SelftestFailed" << std::endl << std::endl;

	EmbeddedSystemX system;
	command* pCmd = nullptr; 
	while (system.isRunning())
	{
		char keypress;
		std::cin >> keypress;
		switch (keypress)
		{
		case '1':
			pCmd = new selfTestOk;
			//system.SelftestOk();
			break;

		case '2':
			pCmd = new initialized; 
			//system.Initialized();
			break;

		case '3':
			pCmd = new restart; 
			//system.Restart();
			break;

		case '4':
			pCmd = new configure; 
			//system.Configure();
			break;

		case '5':
			pCmd = new configurationEnded; 
			//system.ConfigurationEnded();
			break;

		case '6':
			pCmd = new Exit;
			//system.Exit();
			break;

		case '7':
			pCmd = new stop; 
			//system.Stop();
			break;

		case '8':
			pCmd = new start; 
			//system.Start();
			break;

		case '9':
			pCmd = new suspended;
			//system.Suspend();
			break;

		case 'a':
			pCmd = new resume;
			//system.Resume();
			break;

		case 'b':
			pCmd = new selfTestFailed;
			//system.SelftestFailed(rand());
			break;

		default:
			break;
		}
		if (pCmd != nullptr)
			system.handleCommand(pCmd);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
