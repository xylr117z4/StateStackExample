// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GlobalHeader.h"

#include "BaseState.h"
#include "StateHandler.h"
#include "Intro.h"

StateHandler state;
std::stack<int> queue;

void Init(){
	state.push(sID::Intro);	
	state.push(sID::Intro);
	state.push(sID::Base);
}

int _tmain(int argc, _TCHAR* argv[]){
	Init();

	while (!state.empty()){
		if (state.top()->run()){
			state.pop();
		}

		while(!queue.empty()){
			state.push(queue.top());
			queue.pop();
		}
	}

	_getch();
	return 0;
}