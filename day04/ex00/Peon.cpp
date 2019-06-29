//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src)
{
	*this = src;
	return ;
}

Peon& Peon::operator=(Peon const &rhs)
{
	this->name = rhs.name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Peon const &rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return (o);
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}