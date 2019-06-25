//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP00_ZOMBIEEVENT_HPP
#define PISCINECPP00_ZOMBIEEVENT_HPP


#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string	type;

	static std::string names[10];

public:

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump();
};


#endif //PISCINECPP00_ZOMBIEEVENT_HPP
