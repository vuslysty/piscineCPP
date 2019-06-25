//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int n)
{
	this->zHorde = new Zombie[n];
	this->count = n;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "The horde was destroyed" << std::endl;
	delete [] zHorde;
}

void	ZombieHorde::annonce()
{
	for (unsigned int i = 0; i < this->count; i++)
		this->zHorde[i].announce();
}