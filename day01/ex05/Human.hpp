//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP_HUMAN_HPP
#define PISCINECPP_HUMAN_HPP


#include "Brain.hpp"

class Human
{
	const Brain	brain;

public:

	const Brain &getBrain() const;
	std::string	identify() const;

};


#endif //PISCINECPP_HUMAN_HPP
