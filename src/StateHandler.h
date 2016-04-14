#pragma once

#include "GlobalHeader.h"
#include "BaseState.h"
#include "Intro.h"

class StateHandler{
	public:
		StateHandler();
		bool push(int stateID);
		bool pop();
		std::unique_ptr<BaseState>& top();
		bool empty();
		bool clear();

		~StateHandler();

		//Variables
		std::stack<std::unique_ptr<BaseState>> stateStack;
		std::vector<int> currentStateID;
};

