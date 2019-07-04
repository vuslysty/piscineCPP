//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#ifndef PISCINECPP_B_HPP
#define PISCINECPP_B_HPP

#include "Base.hpp"

class B : public Base
{
public:

	B();
	B(B const &);
	B &operator=(B const &);
	~B();
};


#endif //PISCINECPP_B_HPP
