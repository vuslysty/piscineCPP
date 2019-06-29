//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	_name = "Plasma Rifle";
	_damage = 21;
	_apcost = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
	return ;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

AWeapon* PlasmaRifle::clone()
{
	return (new PlasmaRifle());
}