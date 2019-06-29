//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include "AssaultTerminator.hpp"
#include <iostream>

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator());
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;

	return ;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const&)
{
	return *this;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}