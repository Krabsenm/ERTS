#include "VideoProcessor.h"
#include "global.h"
#include "Controller.h"
#include <iostream>



VideoProcessor::VideoProcessor(Controller* the_ctrl, Processor* processor) : _ctrl(the_ctrl), _tHandle(std::thread(&VideoProcessor::process, this)), _processor(processor)
{
}

VideoProcessor::~VideoProcessor()
{
	_tHandle.join();
	std::cout << "I joined!" << std::endl;
}

void VideoProcessor::setProcessor(Processor* pro)
{
	//std::lock_guard<std::mutex> lock(_processorLock);
	if (_processor != nullptr)
		delete _processor;
	_processor = pro;
	
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
		case stopped:
			std::cout << "stopped, stream ended" << std::endl;
			break;
		default:
			_processorLock.lock();
			_processor->process();
			_processorLock.unlock();
			continue;
		}

		break;
		
	}
	
}
