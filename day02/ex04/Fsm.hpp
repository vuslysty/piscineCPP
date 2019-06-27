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
	t_oper		lastOp;

	int		(Fsm::*stateF[7])();
	bool	(Fsm::*isSomeChar[11])(char c);

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
	bool	isElse(char c);

	int		stateNumber();
	int		statePlus();
	int		stateMinus();
	int		stateMult();
	int		stateDiv();
	int		stateOpenScope();
	int		stateCloseScope();

	int 	getCondition(char c);

	static int 	fsm[7][11];
};


#endif //PISCINECPP_FSM_HPP
