//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include "Fsm.hpp"

int	Fsm::stateNumber()
{
	List::pushEnd(&list, NUMBER, workingSpace.substr(startIter, iter - startIter));
	return (0);
}

int	Fsm::statePlus()
{
	List::pushEnd(&list, PLUS, "+");
	return (1);
}

int	Fsm::stateMinus()
{
	List::pushEnd(&list, MINUS, "-");
	return (1);
}
int	Fsm::stateMult()
{
	List::pushEnd(&list, MULT, "*");
	return (1);
}
int	Fsm::stateDiv()
{
	List::pushEnd(&list, DIVISION, "/");
	return (1);
}
int	Fsm::stateOpenScope()
{
	List::pushEnd(&list, OPEN_SCOPE, "(");
	return (1);
}
int	Fsm::stateCloseScope()
{
	List::pushEnd(&list, CLOSE_SCOPE, ")");
	return (1);
}