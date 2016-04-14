#pragma once

#include "GlobalHeader.h"
#include "BaseState.h"

extern std::stack<int> queue;

class Intro : public BaseState{
	public:
		Intro();

		//these will return true when done
			bool load();
			//bool run();
			//bool end();
		~Intro();
};

