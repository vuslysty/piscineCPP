//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONRIGHT_HPP
#define PISCINECPP_ACTIONRIGHT_HPP


#include "IBrainFuck.hpp"

class ActionRight : public ABrainFuck
{
public:

	ActionRight();
	ActionRight(ActionRight const &src);
	ActionRight &operator=(ActionRight const &rhs);
	~ActionRight();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONRIGHT_HPP
