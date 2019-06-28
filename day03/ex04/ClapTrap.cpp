//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string const &name)
{
	this->name = name;

	this->level = 1;

	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << "ClapTrap " << name << " attacks " << target <<
			  " at range, causing " << rangedAttackDamage <<
			  " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << "ClapTrap " << name << " attacks " << target <<
			  " at melee, causing " << meleeAttackDamage <<
			  " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(uint_t amount)
{
	amount = (int)amount - armorDamageReduction >= 0 ? amount - armorDamageReduction : 0;

	std::cout << "ClapTrap " << name << " was attacked, causing " <<
			  amount << " points of damage !" << std::endl;

	hitPoints = hitPoints - (int)amount >= 0 ? hitPoints - amount : 0;
	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(uint_t amount)
{
	std::cout << "ClapTrap " << name << " was repaired" << std::endl;

	if (hitPoints + (int) amount < maxHitPoints)
		hitPoints = hitPoints + amount;
	else
		hitPoints = maxHitPoints;

	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (name);
}

int ClapTrap::getHitPoint() const
{
	return (hitPoints);
}

int ClapTrap::getMaxHitPoint() const
{
	return (maxHitPoints);
}

int ClapTrap::getEnergyPoint() const
{
	return (energyPoints);
}

int ClapTrap::getMaxEnergyPoint() const
{
	return (maxEnergyPoints);
}

int ClapTrap::getMeleeAttackDamage() const
{
	return (meleeAttackDamage);
}

int ClapTrap::getRangedAttackDamage() const
{
	return (rangedAttackDamage);
}


int ClapTrap::getArmorDamageReduction() const
{
	return (armorDamageReduction);
}

void ClapTrap::setName(std::string const &name)
{
	this->name = name;
}

