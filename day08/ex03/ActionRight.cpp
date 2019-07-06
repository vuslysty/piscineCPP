//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "ActionRight.hpp"

ActionRight::ActionRight() {}
ActionRight::ActionRight(ActionRight const &) {}
ActionRight& ActionRight::operator=(ActionRight const &) {return *this;}
ActionRight::~ActionRight() {}

void ActionRight::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	(*c)++;
	++it;
}