//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "TacticalMarine.hpp"

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;

	return ;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const&)
{
	return *this;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}