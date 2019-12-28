#pragma once
#include "Command.h"
#include <thread>
#include "CornerProcessor.h"
#include "EdgeProcessor.h"
#include "PassthroughProcessor.h"

class VideoProcessor
{
public:
	VideoProcessor(Controller* the_ctrl);
	~VideoProcessor();

	void process();
	Controller* _ctrl;
	std::thread _tHandle;


private:
	CornerProcessor _cProcess;
	EdgeProcessor _eProcess;
	PassthroughProcessor _pProcess;
};

