//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP_HUMANB_HPP
#define PISCINECPP_HUMANB_HPP


#include <string>
#include "Weapon.hpp"

class HumanB
{
	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &weapon);
};


#endif //PISCINECPP_HUMANB_HPP
