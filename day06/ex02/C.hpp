//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#ifndef PISCINECPP_C_HPP
#define PISCINECPP_C_HPP

#include "Base.hpp"

class C : public Base
{
public:

	C();
	C(C const &);
	C &operator=(C const &);
	~C();
};


#endif //PISCINECPP_C_HPP
