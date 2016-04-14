#include "stdafx.h"
#include "BaseState.h"


BaseState::BaseState(){
}

bool BaseState::load(){
	stateObjectIDs.push_back(0);
	stateObjectIDs.push_back(1);
	stateObjectIDs.push_back(2);
	stateObjectIDs.push_back(3);
	stateObjectIDs.push_back(4);
	return true;
}

bool BaseState::run(){
	for (unsigned int i = 0; i < stateObjectIDs.size(); ++i){
		std::cout << stateObjectIDs[i] << ", ";
	}
	std::cout << "\n\n";
	queue.push(sID::Clear);
	return true;
}

bool BaseState::end(){
	stateObjectIDs.clear();
	return true;
}

BaseState::~BaseState(){
}
