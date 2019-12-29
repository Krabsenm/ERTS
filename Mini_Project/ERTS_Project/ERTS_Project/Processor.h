#pragma once

class Processor
{
public:
	Processor() {}
	virtual ~Processor() {}
	virtual void process() = 0;
 
};

