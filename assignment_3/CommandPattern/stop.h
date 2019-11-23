#include "command.h"
class stop :
	public Command
{
public:
	void Execute(operational* context, OperationalState* state);
};