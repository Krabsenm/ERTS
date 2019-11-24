#include <iostream>
#include "Client.h"
using namespace std;
int main()
{
	operational* op = new operational();
	Client client(op);

	while (true)
	{
		int options = 0;
		cin >> options;
		switch (options)
		{
		case 0:
			client.Configure();
			break;

		case 1:
			client.ConfigurationEnded();
			break;

		case 2:
			client.Start();
			break;

		case 3:
			client.Stop();
			break;

		case 4:
			client.Suspend();
			break;

		case 5:
			client.Resume();
			break;

		default:
			break;
		}

	}

    std::cout << "Hello World!\n";
}
