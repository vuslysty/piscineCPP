//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string const &name) : name(name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;

	std::cout << "SC4V-TP constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "SC4V-TP copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
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

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP destructor called" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << name << " attacks " << target <<
			  " at range, causing " << rangedAttackDamage <<
			  " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << name << " attacks " << target <<
			  " at melee, causing " << meleeAttackDamage <<
			  " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(uint_t amount)
{
	amount = (int)amount - armorDamageReduction >= 0 ? amount - armorDamageReduction : 0;

	std::cout << "SC4V-TP " << name << " was attacked, causing " <<
			  amount << " points of damage !" << std::endl;

	hitPoints = hitPoints - (int)amount >= 0 ? hitPoints - amount : 0;
	std::cout << "Current SC4V-TP's hit points: " << hitPoints << std::endl;
}

void ScavTrap::beRepaired(uint_t amount)
{
	std::cout << "SC4V-TP " << name << " was repaired" << std::endl;

	if (hitPoints + (int)amount < maxHitPoints)
		hitPoints = hitPoints + amount;
	else
		hitPoints = maxHitPoints;

	std::cout << "Current SC4V-TP's hit points: " << hitPoints << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "SC4V-TP " << name << " say: \"" <<
	challengePool[rand() % CHALLENGE_PHRASES] << "\"" << std::endl;
}

std::string	ScavTrap::challengePool[CHALLENGE_PHRASES] =
		{
			"Lol kek cheburek.",
			"Thank You Mario! But our princess is in another castle!",
			"Tell my wife, I had another wife.",
			"If our lives are already written, it would take a courageous man to change the script.",
			"Boom shakalaka.",
			"Life is a negotiation. We all want. We all give to get what we want.",
			"It’s time to kick ass and chew bubble gum…and I’m all outa gum."
		};