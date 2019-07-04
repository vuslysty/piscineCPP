//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include "../Convert.hpp"

bool	isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	isPlus(char c)
{
	return (c == '+');
}

bool	isMinus(char c)
{
	return (c == '-');
}

bool	isDot(char c)
{
	return (c == '.');
}

bool	isF(char c)
{
	return (c == 'f');
}

bool	isQuote(char c)
{
	return (c == '\'');
}

bool	isNull(char c)
{
	return (c == '\0');
}