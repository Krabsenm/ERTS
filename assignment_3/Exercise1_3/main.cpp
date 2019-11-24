// Exercise1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EmbeddedSystemX.h"
	
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
	while (system.isRunning())
	{
		char keypress;
		std::cin >> keypress;
		switch (keypress)
		{
		case '1':
			system.SelftestOk();
			break;

		case '2':
			system.Initialized();
			break;

		case '3':
			system.Restart();
			break;

		case '4':
			system.Configure();
			break;

		case '5':
			system.ConfigurationEnded();
			break;

		case '6':
			system.Exit();
			break;

		case '7':
			system.Stop();
			break;

		case '8':
			system.Start();
			break;

		case '9':
			system.Suspend();
			break;

		case 'a':
			system.Resume();
			break;

		case 'b':
			system.SelftestFailed(rand());
			break;

		default:
			break;
		}
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
