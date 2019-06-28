//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{

	srand (time(nullptr) * time(nullptr));

	ScavTrap	scav("Mania");
	FragTrap	frag("Robocop");
	NinjaTrap	ninja("Cheburek");

	ninja.ninjaShoebox(frag);

	ninja.ninjaShoebox(ninja);


	return (0);
}