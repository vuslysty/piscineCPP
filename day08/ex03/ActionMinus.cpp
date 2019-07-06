//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "ActionMinus.hpp"

ActionMinus::ActionMinus() {}
ActionMinus::ActionMinus(ActionMinus const &) {}
ActionMinus& ActionMinus::operator=(ActionMinus const &) {return *this;}
ActionMinus::~ActionMinus() {}

void ActionMinus::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	(**c)--;
	++it;
}