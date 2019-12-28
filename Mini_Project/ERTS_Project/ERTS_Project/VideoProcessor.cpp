#include "VideoProcessor.h"
#include "global.h"
#include "Controller.h"
#include <iostream>


VideoProcessor::VideoProcessor(Controller* the_ctrl) : _ctrl(the_ctrl), _tHandle(std::thread(&VideoProcessor::process, this))
{

}

VideoProcessor::~VideoProcessor()
{
	_tHandle.join();
	std::cout << "I joined!" << std::endl;
}

void VideoProcessor::process()
{

	while(true)
	{
		const state current_state = _ctrl->getState();
		std::chrono::milliseconds timespan(1000);
		std::this_thread::sleep_for(timespan);
		
		switch (current_state)
		{
		case passthrough:
			std::cout << "pass...passs...passs.." << std::endl; 
			continue;
		case edgedetection:
			std::cout << "egdeee...edge...edgeee.." << std::endl;
			continue;
		case cornerdetection:
			std::cout << "corner...cornerr...cornerrr.." << std::endl;
			continue;
		case stopped:
			std::cout << "stopped, stream ended" << std::endl;
			break;
		default:
			continue;
		}

		break;
		
	}
	
}
