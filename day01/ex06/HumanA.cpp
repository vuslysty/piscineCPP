//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), weapon(club)
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << weapon.getType() << std::endl;
}