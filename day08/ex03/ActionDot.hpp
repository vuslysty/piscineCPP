//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONDOT_HPP
#define PISCINECPP_ACTIONDOT_HPP

#include "IBrainFuck.hpp"

class ActionDot : public ABrainFuck
{
public:

	ActionDot();
	ActionDot(ActionDot const &src);
	ActionDot &operator=(ActionDot const &rhs);
	~ActionDot();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONDOT_HPP
