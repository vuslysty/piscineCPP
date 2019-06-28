//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string const &name) : name(name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	lightJabAttackDamage = 10;
	ironSideShootAttackDamage = 25;
	ultraAttackDamage = 40;
	armorDamageReduction = 5;

	attacks[0] = &FragTrap::rangedAttack;
	attacks[1] = &FragTrap::meleeAttack;
	attacks[2] = &FragTrap::lightJabAttack;
	attacks[3] = &FragTrap::ironSideShootAttack;
	attacks[4] = &FragTrap::ultraAttack;

	std::cout << "FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FR4G-TP copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->hitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->lightJabAttackDamage = rhs.lightJabAttackDamage;
	this->ironSideShootAttackDamage = rhs.ironSideShootAttackDamage;
	this->ultraAttackDamage = rhs.ultraAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;

	this->attacks[0] = rhs.attacks[0];
	this->attacks[1] = rhs.attacks[1];
	this->attacks[2] = rhs.attacks[2];
	this->attacks[3] = rhs.attacks[3];
	this->attacks[4] = rhs.attacks[4];

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<
				" at range, causing " << rangedAttackDamage <<
				" points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<
			  " at melee, causing " << meleeAttackDamage <<
			  " points of damage !" << std::endl;
}

void FragTrap::lightJabAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<
			  " at light jab, causing " << lightJabAttackDamage <<
			  " points of damage !" << std::endl;
}

void FragTrap::ironSideShootAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<
			  " at iron side shoot, causing " << ironSideShootAttackDamage <<
			  " points of damage !" << std::endl;
}

void FragTrap::ultraAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<
			  " at ultra attack, causing " << ultraAttackDamage <<
			  " points of damage !" << std::endl;
}


void FragTrap::takeDamage(uint_t amount)
{
	amount = (int)amount - armorDamageReduction >= 0 ? amount - armorDamageReduction : 0;

	std::cout << "FR4G-TP " << name << " was attacked, causing " <<
	amount << " points of damage !" << std::endl;

	hitPoints = hitPoints - (int)amount >= 0 ? hitPoints - amount : 0;
	std::cout << "Current FR4G-TP's hit points: " << hitPoints << std::endl;
}

void FragTrap::beRepaired(uint_t amount)
{
	std::cout << "FR4G-TP " << name << " was repaired" << std::endl;

	if (hitPoints + (int)amount < maxHitPoints)
		hitPoints = hitPoints + amount;
	else
		hitPoints = maxHitPoints;

	std::cout << "Current FR4G-TP's hit points: " << hitPoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::cout << "Vaulthunter_dot_exe called" << std::endl;
	if (energyPoints >= 25)
	{
		(this->*attacks[rand() % 5])(target);
		energyPoints -= 25;
	}
	std::cout << "Current FR4G-TP's energy points: " << energyPoints << std::endl;
}