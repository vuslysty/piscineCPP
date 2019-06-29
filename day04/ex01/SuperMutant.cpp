//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	_type = "Super Mutant";
	_hp = 170;

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
	return ;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &rhs)
{
	_type = rhs.getType();
	_hp = rhs.getHP();

	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}