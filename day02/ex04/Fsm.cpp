//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include "Fsm.hpp"

Fsm::Fsm(std::string const &str) : state(0), workingSpace(str)
{
	list = nullptr;
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

List* Fsm::startTokenization()
{

}

bool (Fsm::*isSomeChar[10])(char c) = {
		&Fsm::isNumber,
		&Fsm::isPoint,
		&Fsm::isPlus,
		&Fsm::isMinus,
		&Fsm::isMult,
		&Fsm::isDiv,
		&Fsm::isOpenScope,
		&Fsm::isCloseScope,
		&Fsm::isWhiteSpase,
		&Fsm::isEOS
};

