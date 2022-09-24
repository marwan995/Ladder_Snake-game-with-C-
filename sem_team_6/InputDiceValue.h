#pragma once

#include "Action.h"

class InputDiceValue : public Action
{

	// No parameters for this action
	static int DiceValue;

public:
	InputDiceValue(ApplicationManager* pApp);

	virtual void ReadActionParameters();

	virtual void Execute();

	virtual ~InputDiceValue();
};