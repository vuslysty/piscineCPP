//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	return(type);
}

void	Weapon::setType(std::string str)
{
	type = str;
}