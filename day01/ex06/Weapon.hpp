//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP_WEAPON_HPP
#define PISCINECPP_WEAPON_HPP


#include <string>

class Weapon
{
	std::string	type;

public:

	Weapon();
	Weapon(std::string type);
	const std::string	&getType();
	void				setType(std::string str);
};


#endif //PISCINECPP_WEAPON_HPP
