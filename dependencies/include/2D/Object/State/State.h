#pragma once

#include "Core/Core.h"

#include <vector>

class StateTransition;
class Game;

class State {

	friend class StateMachine;

private:
	std::vector<StateTransition*> m_transitions;
public:
	State();
	virtual ~State();

	void addTransition(StateTransition* transition);

	virtual void onEnter() = 0;
	virtual void onExit() = 0;
	virtual void tick(float32 delta) = 0;
};