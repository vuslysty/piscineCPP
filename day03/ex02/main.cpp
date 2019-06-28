//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	srand (time(nullptr) * time(nullptr));

	ScavTrap	scav("Mania");
	FragTrap	frag("Robocop");

	scav.challengeNewcomer();

	scav.meleeAttack("Robocop");
	frag.takeDamage(20);

	frag.ultraAttack("Mania");
	scav.takeDamage(40);

	scav.challengeNewcomer();

	scav.rangedAttack("Robocop");
	frag.takeDamage(15);

	frag.beRepaired(12);

	scav.beRepaired(1000);

	frag.vaulthunter_dot_exe("Mania");

	return (0);
}