#include "command.h"
class start :
	public command
{
public:
	void Execute(operational* context, operationalState* state);
};