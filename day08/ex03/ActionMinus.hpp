//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONMINUS_HPP
#define PISCINECPP_ACTIONMINUS_HPP


#include "IBrainFuck.hpp"

class ActionMinus : public IBrainFuck
{
public:

	ActionMinus();
	ActionMinus(ActionMinus const &src);
	ActionMinus &operator=(ActionMinus const &rhs);
	~ActionMinus();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONMINUS_HPP
