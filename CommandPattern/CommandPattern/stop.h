#include "command.h"
class stop :
	public command
{
public:
	void Execute(operational* context, operationalState* state);
};