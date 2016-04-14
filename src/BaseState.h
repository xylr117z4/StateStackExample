#pragma once

#include "GlobalHeader.h"

extern std::stack<int> queue;

class BaseState{
	public:
		BaseState();
		std::vector<int> stateObjectIDs;

		//these will return true when done
			virtual bool load();
			virtual bool run();
			virtual bool end();

		~BaseState();

		//Variables
};

