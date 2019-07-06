//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "ActionLeft.hpp"

ActionLeft::ActionLeft() {}
ActionLeft::ActionLeft(ActionLeft const &) {}
ActionLeft& ActionLeft::operator=(ActionLeft const &) {return *this;}
ActionLeft::~ActionLeft() {}

void ActionLeft::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	(*c)--;
	++it;
}