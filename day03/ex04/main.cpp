//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{

	srand (time(nullptr) * time(nullptr));

	SuperTrap	super("IVAN");
	NinjaTrap	ninjaTrap("Yoko");

	super.ninjaShoebox(ninjaTrap);


	return (0);
}