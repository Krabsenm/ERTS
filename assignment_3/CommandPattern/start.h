#include "command.h"
class start :
	public Command
{
public:
	void Execute(operational* context, OperationalState* state);
};