//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}