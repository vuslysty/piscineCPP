//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include <iostream>
#include "ActionDot.hpp"

ActionDot::ActionDot() {}
ActionDot::ActionDot(ActionDot const &) {}
ActionDot& ActionDot::operator=(ActionDot const &) {return *this;}
ActionDot::~ActionDot() {}

void ActionDot::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	std::cout << (**c);
	++it;
}