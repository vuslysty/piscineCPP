//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_CHARACTER_HPP
#define PISCINECPP_CHARACTER_HPP


#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	std::string	_name;
	int 		_apCount;
	AWeapon		*_weapon;

	Character();

public:

	Character(std::string const &name);
	Character(Character const &src);
	Character &operator=(Character const &rhs);
	virtual ~Character();

	void	recoverAP();
	void	equip(AWeapon*);
	void	attack(Enemy*);

	std::string	const &getName() const;
	int 		getAP() const;
	AWeapon		*getWeapon() const;

};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif //PISCINECPP_CHARACTER_HPP
