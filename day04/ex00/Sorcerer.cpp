//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;

	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	return ;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. " <<
	"Consequences will never be the same !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() <<
		", and I like ponies !" << std::endl;
	return (o);
}

std::string Sorcerer::getName() const
{
	return (name);
}

std::string Sorcerer::getTitle() const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &target)
{
	target.getPolymorphed();
}