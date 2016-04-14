#include "stdafx.h"
#include "StateHandler.h"


StateHandler::StateHandler(){

}

bool StateHandler::push(int stateID){
	switch (stateID){
		case sID::Base:
			stateStack.push(std::make_unique<BaseState>());
			break;
		case sID::Intro:
			stateStack.push(std::make_unique<Intro>());
			break;
		case sID::Menu:
			break;
		case sID::Game:
			break;
		case sID::Clear:
			StateHandler::clear();
			break;
		default:
			break;
	}
	currentStateID.push_back(stateID);
	if (stateID != sID::Clear){
		stateStack.top()->load();
	}
	return false;
}

bool StateHandler::pop(){
	stateStack.top()->end();
	stateStack.pop();
	return false;
}

std::unique_ptr<BaseState>& StateHandler::top(){
	return stateStack.top();
}

bool StateHandler::empty(){
	return stateStack.empty();
}

bool StateHandler::clear(){
	while (!stateStack.empty()){
		stateStack.pop();
	}
	return false;
}

StateHandler::~StateHandler(){

}
