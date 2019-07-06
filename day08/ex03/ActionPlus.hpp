//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONPLUS_HPP
#define PISCINECPP_ACTIONPLUS_HPP


#include "IBrainFuck.hpp"

class ActionPlus : public IBrainFuck
{
public:

	ActionPlus();
	ActionPlus(ActionPlus const &src);
	ActionPlus &operator=(ActionPlus const &rhs);
	~ActionPlus();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONPLUS_HPP
