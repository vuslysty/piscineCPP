//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name) :
		_name(name), _apCount(40), _weapon(nullptr)
{}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character& Character::operator=(Character const &rhs)
{
	_name = rhs.getName();
	_apCount = rhs._apCount;
	_weapon = rhs.getWeapon()->clone();
	return (*this);
}

Character::~Character()
{

}

std::string	const& Character::getName() const
{
	return(_name);
}

void Character::recoverAP()
{
	_apCount += 10;
	if (_apCount > 40)
		_apCount = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon)
	{
		if (_apCount >= _weapon->getAPCost())
		{
			_apCount -= _weapon->getAPCost();

			std::cout << _name << " attacks " << enemy->getType() <<
					  " with a " << _weapon->getName() << std::endl;

			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
		else
			std::cout << "Don't enough Action point for attack !" << std::endl;
	}
}

int Character::getAP() const
{
	return (_apCount);
}

AWeapon* Character::getWeapon() const
{
	return (_weapon);
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " <<
		  rhs.getWeapon()->getName() << std::endl;
	}
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;

	return (o);
}