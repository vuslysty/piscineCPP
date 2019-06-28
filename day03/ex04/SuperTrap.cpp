//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {}

SuperTrap::SuperTrap(std::string const &name)
{
	FragTrap	fragTrap;
	NinjaTrap	ninjaTrap;

	setName(name);
	level = 1;
	hitPoints = fragTrap.getHitPoint();
	maxHitPoints = fragTrap.getMaxHitPoint();
	energyPoints = ninjaTrap.getEnergyPoint();
	maxEnergyPoints = ninjaTrap.getMaxEnergyPoint();
	meleeAttackDamage = ninjaTrap.getMeleeAttackDamage();
	rangedAttackDamage = fragTrap.getRangedAttackDamage();
	armorDamageReduction = fragTrap.getArmorDamageReduction();

	std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src)
{
	std::cout << "SuperTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->hitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;

	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}