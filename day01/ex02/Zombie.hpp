//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP00_ZOMBIE_HPP
#define PISCINECPP00_ZOMBIE_HPP


#include <string>

class Zombie
{
	std::string	type;
	std::string	name;

public:

	Zombie();
	Zombie(std::string type, std::string name);
	void	announce();
};


#endif //PISCINECPP00_ZOMBIE_HPP
