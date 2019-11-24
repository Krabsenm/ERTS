#include "command.h"
class resume :
	public command
{
public:
	void Execute(EmbeddedSystemX * context, EmbeddedSystemState* state);
};