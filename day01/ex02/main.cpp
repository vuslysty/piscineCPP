//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	zEvent;
	Zombie		*zombie;

	srand (time(NULL));

	zEvent.setZombieType("Armored");
	zombie = zEvent.newZombie("Jerry");
	zombie->announce();
	delete zombie;

	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.setZombieType("Radioactive");
	zEvent.randomChump();
	zEvent.randomChump();

	return (0);
}