//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) :
	type(type), name(name)
{
}

Zombie::Zombie()
{
}


void Zombie::announce()
{
	std::cout << '<' << name << " (" << type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}