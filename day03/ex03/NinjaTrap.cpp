//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;

	attacks[0] = &NinjaTrap::rangedAttackDamage;
	attacks[1] = &NinjaTrap::meleeAttackDamage;

	std::cout << "NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src)
{
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &rhs)
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

	this->attacks[0] = rhs.attacks[0];
	this->attacks[1] = rhs.attacks[1];

	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &enemy)
{
	std::cout << "Ninja " << name << " attacked FR4G-TP " << enemy.getName() << std::endl;
	enemy.takeDamage(this->*attacks[rand() % 2]);
}

void NinjaTrap::ninjaShoebox(ScavTrap &enemy)
{
	std::cout << "Ninja " << name << " attacked SC4V-TP " << enemy.getName() << std::endl;
	enemy.takeDamage(this->*attacks[rand() % 2]);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &enemy)
{
	if (this == &enemy)
		std::cout << "Wow wow, it's me, I won't fight myself." << std::endl;
	else
	{
		std::cout << "Ninja " << name << " attacked ninja " << enemy.name << std::endl;
		enemy.takeDamage(this->*attacks[rand() % 2]);
	}
}