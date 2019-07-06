//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_ACTIONOPEN_HPP
#define PISCINECPP_ACTIONOPEN_HPP


#include "IBrainFuck.hpp"

class ActionOpen : public IBrainFuck
{
public:

	ActionOpen();
	ActionOpen(ActionOpen const &src);
	ActionOpen &operator=(ActionOpen const &rhs);
	~ActionOpen();

	void	doOperation(unsigned char **c, iterator &it);
};


#endif //PISCINECPP_ACTIONOPEN_HPP
