//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include "Human.hpp"

std::string	Human::identify() const
{
	return (brain.identify());
}

const Brain &Human::getBrain() const
{
	return brain;
}
