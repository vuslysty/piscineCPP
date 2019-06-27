//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include "Fsm.hpp"
#include <iostream>

Fsm::Fsm(std::string const &str) :
	state(1), workingSpace(str), list(nullptr), iter(0)
{
	lastOp = OPEN_SCOPE;

	this->stateF[0] = &Fsm::stateNumber;
	this->stateF[1] = &Fsm::statePlus;
	this->stateF[2] = &Fsm::stateMinus;
	this->stateF[3] = &Fsm::stateDiv;
	this->stateF[4] = &Fsm::stateMult;
	this->stateF[5] = &Fsm::stateOpenScope;
	this->stateF[6] = &Fsm::stateCloseScope;

	this->isSomeChar[0] = &Fsm::isEOS;
	this->isSomeChar[1] = &Fsm::isWhiteSpase;
	this->isSomeChar[2] = &Fsm::isNumber;
	this->isSomeChar[3] = &Fsm::isPoint;
	this->isSomeChar[4] = &Fsm::isPlus;
	this->isSomeChar[5] = &Fsm::isMinus;
	this->isSomeChar[6] = &Fsm::isMult;
	this->isSomeChar[7] = &Fsm::isDiv;
	this->isSomeChar[8] = &Fsm::isOpenScope;
	this->isSomeChar[9] = &Fsm::isCloseScope;
	this->isSomeChar[10] = &Fsm::isElse;
}

Fsm::~Fsm()
{}

Fsm::Fsm(Fsm const &src)
{
	*this = src;

	return ;
}

Fsm& Fsm::operator=(Fsm const &rhs)
{
	state = rhs.state;
	workingSpace = rhs.workingSpace;
	return (*this);
}

int 	Fsm::getCondition(char c)
{
	int i = 0;

	while (i < 10)
	{
		if ((this->*Fsm::isSomeChar[i])(c))
			return (i);
		i++;
	}
	return (i);
}

//bool (Fsm::*isSomeChar[10])(char c) = {
//		&Fsm::isNumber,
//		&Fsm::isPoint,
//		&Fsm::isPlus,
//		&Fsm::isMinus,
//		&Fsm::isMult,
//		&Fsm::isDiv,
//		&Fsm::isOpenScope,
//		&Fsm::isCloseScope,
//		&Fsm::isWhiteSpase,
//		&Fsm::isEOS
//};

//int		(Fsm::stateF[7])() = {
//		&Fsm::stateNumber,
//		&Fsm::statePlus,
//		&Fsm::stateMinus,
//		&Fsm::stateMult,
//		&Fsm::stateDiv,
//		&Fsm::stateOpenScope,
//		&Fsm::stateCloseScope
//};

List* Fsm::startTokenization()
{
	state = 1;

	while (state != 0 && state != -10)
	{
		state = fsm[state - 1][getCondition(workingSpace[iter])];
		if (state == 6 && lastOp == NUMBER)
			state = -3;
		if (state == 5 && lastOp == NUMBER)
			state = -2;
		if (state < 0 && state != -10)
		{
			startIter = iter += (this->*Fsm::stateF[abs(state) - 1])();
			state = 1;
		}
		else
			iter++;
	}
	if (state == -10)
		return (list);
	else
	{
		std::cout << "Lol error" << std::endl;
		List::delList(&list);
		return (nullptr);
	}
}

int Fsm::fsm[7][11] =
		{
				{-10, 1, 3, 4, 5, 6, -5, -4, -6, -7, 0},
				{-1, -1, 2, -1, -1, -1, -1, -1, -1, -1, -1},
				{-1, -1, 3, 2, -1, -1, -1, -1, -1, -1, -1},
				{0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0},
				{-2, -2, 3, 2, -2, -2, -2, -2, -2, -2, -2},
				{-3, -3, 3, 2, -3, -3, -3, -3, -3, -3, -3},
				{-1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1}
		};