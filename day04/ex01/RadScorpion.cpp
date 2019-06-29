//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	_type = "RadScorpion";
	_hp = 80;

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	*this = src;
	return ;
}

RadScorpion& RadScorpion::operator=(RadScorpion const &rhs)
{
	_type = rhs.getType();
	_hp = rhs.getHP();

	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}