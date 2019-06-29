//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return ;
}

AWeapon& AWeapon::operator=(AWeapon const &rhs)
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string	const& AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}