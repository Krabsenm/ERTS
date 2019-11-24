#include "command.h"
class resume :
	public command
{
public:
	void Execute(operational* context, operationalState* state);
};