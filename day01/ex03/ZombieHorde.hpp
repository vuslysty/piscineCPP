//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP00_ZOMBIEHORDE_HPP
#define PISCINECPP00_ZOMBIEHORDE_HPP


#include "Zombie.hpp"

class ZombieHorde
{
	unsigned int	count;
	Zombie			*zHorde;

public:

	ZombieHorde(unsigned int n);
	~ZombieHorde();
	void	annonce();
};


#endif //PISCINECPP00_ZOMBIEHORDE_HPP
