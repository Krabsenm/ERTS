#include "command.h"
class suspended :
	public Command
{
public:
	void Execute(operational* context, OperationalState* state);
};