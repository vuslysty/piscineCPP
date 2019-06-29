//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "PowerFirst.hpp"

PowerFirst::PowerFirst()
{
	_name = "Power Fist";
	_damage = 50;
	_apcost = 8;
}

PowerFirst::PowerFirst(PowerFirst const &src)
{
	*this = src;
	return ;
}

PowerFirst& PowerFirst::operator=(PowerFirst const &rhs)
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}

PowerFirst::~PowerFirst()
{
}

void PowerFirst::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

AWeapon* PowerFirst::clone()
{
	return (new PowerFirst());
}