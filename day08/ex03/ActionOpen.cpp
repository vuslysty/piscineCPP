//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "ActionOpen.hpp"

ActionOpen::ActionOpen() {}
ActionOpen::ActionOpen(ActionOpen const &) {}
ActionOpen& ActionOpen::operator=(ActionOpen const &) {return *this;}
ActionOpen::~ActionOpen() {}

void ActionOpen::doOperation(unsigned char **c, IBrainFuck::iterator &it)
{
	int mod = 0;

	if (**c == 0)
	{
		while (1)
		{
			++it;
			if ()
		}
	}
}