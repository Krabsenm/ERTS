#include "command.h"
class resume :
	public Command
{
public:
	void Execute(operational* context, OperationalState* state);
};