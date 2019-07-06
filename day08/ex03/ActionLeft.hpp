//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONLEFT_HPP
#define PISCINECPP_ACTIONLEFT_HPP


#include "IBrainFuck.hpp"

class ActionLeft : public IBrainFuck
{
public:

	ActionLeft();
	ActionLeft(ActionLeft const &src);
	ActionLeft &operator=(ActionLeft const &rhs);
	~ActionLeft();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONLEFT_HPP
