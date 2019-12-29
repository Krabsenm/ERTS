#pragma once
#include "Command.h"
#include <thread>
#include "Processor.h"
#include <mutex>

class VideoProcessor
{
public:
	VideoProcessor(Controller* the_ctrl, Processor*);
	~VideoProcessor();

	void setProcessor(Processor*);
	void process();
	Controller* _ctrl;
	std::thread _tHandle;


private:
	Processor* _processor = nullptr;
	std::mutex _processorLock;
};	

