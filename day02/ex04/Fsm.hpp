//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#ifndef PISCINECPP_FSM_HPP
#define PISCINECPP_FSM_HPP


#include <string>
#include "List.hpp"

class Fsm
{
	int 		state;
	std::string	workingSpace;
	List		*list;
	int 		startIter;
	int			iter;

public:
	Fsm(std::string const &str);
	~Fsm();
	Fsm(Fsm const &src);
	Fsm &operator=(Fsm const &rhs);

	List *startTokenization();

	bool	isNumber(char c);
	bool	isPoint(char c);
	bool	isPlus(char c);
	bool	isMinus(char c);
	bool	isMult(char c);
	bool	isDiv(char c);
	bool	isOpenScope(char c);
	bool	isCloseScope(char c);
	bool	isWhiteSpase(char c);
	bool	isEOS(char c);

	int		stateNumber();
	int		statePlus();
	int		stateMinus();
	int		stateMult();
	int		stateDiv();
	int		stateOpenScope();
	int		stateCloseScope();


	static int 	fsm[
			][];
	static bool	(Fsm::*isSomeChar[10])(char c);
};


#endif //PISCINECPP_FSM_HPP
