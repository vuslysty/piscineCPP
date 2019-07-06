//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "ActionPlus.hpp"

ActionPlus::ActionPlus() {}
ActionPlus::ActionPlus(ActionPlus const &) {}
ActionPlus& ActionPlus::operator=(ActionPlus const &) {return *this;}
ActionPlus::~ActionPlus() {}

void ActionPlus::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	(**c)++;
	++it;
}