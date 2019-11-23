#include "EmbeddedSystemState.h"

void EmbeddedSystemState::ChangeState(EmbeddedSystemX* pESX, EmbeddedSystemState* pState)
{
	std::cout << "Changing state to: " << pState->Name() << std::endl;
	pESX->ChangeState(pState);
	pState->Entry();
}
