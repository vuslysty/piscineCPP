//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include "Fsm.hpp"

int	Fsm::stateNumber()
{
	List::pushEnd(&list, NUMBER, workingSpace.substr(startIter, iter - startIter));
	lastOp = NUMBER;
	return (0);
}

int	Fsm::statePlus()
{
	List::pushEnd(&list, PLUS, "+");
	if (lastOp == NUMBER)
	{
		lastOp = PLUS;
		return (1);
	}
	else
	{
		lastOp = PLUS;
		return (0);
	}
}

int	Fsm::stateMinus()
{
	List::pushEnd(&list, MINUS, "-");
	if (lastOp == NUMBER)
	{
		lastOp = MINUS;
		return (1);
	}
	else
	{
		lastOp = MINUS;
		return (0);
	}
}
int	Fsm::stateMult()
{
	List::pushEnd(&list, MULT, "*");
	lastOp = MULT;
	return (1);
}
int	Fsm::stateDiv()
{
	List::pushEnd(&list, DIVISION, "/");
	lastOp = DIVISION;
	return (1);
}
int	Fsm::stateOpenScope()
{
	List::pushEnd(&list, OPEN_SCOPE, "(");
	lastOp = OPEN_SCOPE;
	return (1);
}
int	Fsm::stateCloseScope()
{
	List::pushEnd(&list, CLOSE_SCOPE, ")");
	lastOp = CLOSE_SCOPE;
	return (1);
}