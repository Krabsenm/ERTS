#include "command.h"
class suspended :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};