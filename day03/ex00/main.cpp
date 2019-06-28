//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "FragTrap.hpp"

int main()
{
	srand (time(nullptr) * time(nullptr));

	FragTrap	frag("R2D2");

	FragTrap	a(frag);

	a.meleeAttack("Oleh");


	frag.vaulthunter_dot_exe("Robocop");
	frag.takeDamage(25);

	frag.vaulthunter_dot_exe("Terminator");
	frag.takeDamage(16);

	frag.vaulthunter_dot_exe("Pinokio");
	frag.takeDamage(56);

	frag.beRepaired(12);

	frag.vaulthunter_dot_exe("Teleuzik Tinki-Vinki");
	frag.takeDamage(45);

	frag.beRepaired(123);

	frag.vaulthunter_dot_exe("Gena");
	frag.takeDamage(104);

	frag.vaulthunter_dot_exe("Cheburashka");

	return (0);
}