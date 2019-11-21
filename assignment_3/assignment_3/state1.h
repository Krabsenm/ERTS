#pragma once
class context; 

class state1
{
public:
	virtual void     handle(context* myself) = 0;
//	virtual state1*  getInstance() = 0;
private: 

};

