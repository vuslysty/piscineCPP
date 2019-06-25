//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include <sstream>
#include "Brain.hpp"

static void	strToUpper(std::string &str)
{
	unsigned int		i;

	i = 0;
	while (i < str.length())
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

std::string	Brain::identify() const
{
	std::stringstream	address;
	std::string			hexcode;

	address << std::hex << this;
	hexcode = address.str();
	strToUpper(hexcode);
	hexcode[1] = 'x';
	return (hexcode);
}
