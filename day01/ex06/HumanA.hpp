//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP_HUMANA_HPP
#define PISCINECPP_HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{
	std::string	_name;
	Weapon		&weapon;

public:

	HumanA(std::string name, Weapon &club);
	void	attack();
};


#endif //PISCINECPP_HUMANA_HPP
