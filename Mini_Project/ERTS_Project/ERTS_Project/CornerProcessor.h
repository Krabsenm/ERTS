#pragma once
#include "Processor.h"

class CornerProcessor : public Processor
{
public:
	CornerProcessor() {}
	~CornerProcessor(){}
	
	void process() override;
	
};

