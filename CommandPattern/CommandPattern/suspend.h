#include "command.h"
class suspended :
	public command
{
public:
	void Execute(operational* context, operationalState* state);
};