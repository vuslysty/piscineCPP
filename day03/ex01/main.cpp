//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand (time(nullptr) * time(nullptr));

	ScavTrap	scav("Mania");

	scav.challengeNewcomer();
	scav.takeDamage(25);

	scav.meleeAttack("Lolkeks");

	scav.challengeNewcomer();
	scav.takeDamage(16);

	scav.challengeNewcomer();
	scav.takeDamage(56);

	scav.beRepaired(12);

	scav.rangedAttack("RedBelly");
	scav.challengeNewcomer();
	scav.takeDamage(45);

	scav.beRepaired(123);

	scav.challengeNewcomer();
	scav.takeDamage(104);

	scav.challengeNewcomer();

	return (0);
}