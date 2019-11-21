#include <iostream>
#include "context.h"



int main()
{
	std::cout << "Program executing" << std::endl; 

	context myContext;



	while (1)
	{
		myContext.handle();
	}

}