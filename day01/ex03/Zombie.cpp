//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->type = "Radioactive";
	this->name = names[rand() % 10];
}


void Zombie::announce()
{
	std::cout << '<' << name << " (" << type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::names[10] = {
		"Mudo",
		"Draggers",
		"Necrotics",
		"Ghouls",
		"Rotters",
		"Saifu",
		"Geeks",
		"Lame Brains",
		"Infected",
		"Grabbers"
};