//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//


#include <cstdlib>
#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* bobr = new TacticalMarine;
	ISpaceMarine* jimy = new AssaultTerminator;
//	ISpaceMarine* rick = new AssaultTerminator;

	Squad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bobr);
	vlc->push(jimy);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(nullptr);

	Squad newSquad = *vlc;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	for (int i = 0; i < newSquad.getCount(); ++i)
	{
		ISpaceMarine *cur = newSquad.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;

	system("leaks -q day04_ex02");

	return 0;
}