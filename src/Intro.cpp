#include "stdafx.h"
#include "Intro.h"


Intro::Intro(){
}

bool Intro::load(){
	stateObjectIDs.push_back(5);
	stateObjectIDs.push_back(6);
	stateObjectIDs.push_back(7);
	stateObjectIDs.push_back(8);
	stateObjectIDs.push_back(9);
	return true;
}

Intro::~Intro(){
}
