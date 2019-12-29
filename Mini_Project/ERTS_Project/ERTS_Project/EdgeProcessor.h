#pragma once
#include "Processor.h"

class EdgeProcessor : public Processor 
{
public:
	EdgeProcessor() {}
	~EdgeProcessor() {}
	void process() override;
};

