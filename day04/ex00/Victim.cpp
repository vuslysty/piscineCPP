//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include "Victim.hpp"
#include <iostream>
#include <string>

Victim::Victim()
{
}

Victim::Victim(std::string const &name)
{
	this->name = name;

	std::cout << "Some random victim called "<< this->name << " just popped!" << std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	return ;
}

Victim& Victim::operator=(Victim const &rhs)
{
	this->name = rhs.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return (o);
}

std::string Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}