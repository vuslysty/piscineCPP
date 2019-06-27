//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include <cctype>
#include "Fsm.hpp"

bool	Fsm::isNumber(char c)
{
	return (isdigit(c));
}

bool	Fsm::isPoint(char c)
{
	return (c == '.');
}

bool	Fsm::isPlus(char c)
{
	return (c == '+');
}

bool	Fsm::isMinus(char c)
{

	return (c == '-');
}

bool	Fsm::isMult(char c)
{
	return (c == '*');
}

bool	Fsm::isDiv(char c)
{
	return (c == '/');
}

bool	Fsm::isOpenScope(char c)
{
	return (c == '(');
}

bool	Fsm::isCloseScope(char c)
{
	return (c == ')');
}

bool	Fsm::isWhiteSpase(char c)
{
	return (c == '\t' || c == ' ');
}

bool	Fsm::isEOS(char c)
{
	return (c == '\0');
}

bool	Fsm::isElse(char c)
{
	if (c)
		;
	return (1);
}
