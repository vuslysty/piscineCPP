//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <ctime>
#include <cstdlib>
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(this->type, name);
	return (zombie);
}

void	ZombieEvent::randomChump()
{
	Zombie	zombie(this->type, names[rand() % 10]);
	zombie.announce();
}

std::string	ZombieEvent::names[10] = {
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