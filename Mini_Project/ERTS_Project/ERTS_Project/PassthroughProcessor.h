#pragma once
#include "Processor.h"

class PassthroughProcessor : public Processor 
{
public:
	PassthroughProcessor(){}
	~PassthroughProcessor() {}
	void process() override;
};
