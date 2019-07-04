//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#ifndef PISCINECPP_A_HPP
#define PISCINECPP_A_HPP

#include "Base.hpp"

class A : public Base
{
public:

	A();
	A(A const &);
	A &operator=(A const &);
	~A();
};


#endif //PISCINECPP_A_HPP
