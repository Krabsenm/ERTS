#include "command.h"
class stop :
	public command
{
public:
	void Execute(EmbeddedSystemX* context, EmbeddedSystemState* state);
};