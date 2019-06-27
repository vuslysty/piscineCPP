//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include "Fsm.hpp"

#define MATH_OP(list) (list->oper == MINUS || list->oper == PLUS || \
list->oper == MULT || list->oper == DIVISION)

float bits[8] =
		{
			0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625, 0.0078125, 0.00390625
		};

int		isNorm(List *list)
{
	if (list->nbOpenScopes != list->nbCloseScopes)
	{
		std::cout << "error" << std::endl;
		exit(0);
	}

	while (list->next)
	{
		if (MATH_OP(list) && MATH_OP(list->next)
			std::cout << "error" << std::endl;
//		else (list-)
		
	}
}


int main()
{

	Fsm fsm("5++++-4");

	List *list = fsm.startTokenization();

	List *tmp = list;

	while(tmp)
	{
		std::cout << tmp->num_str << " ";
		tmp = tmp->next;
	}
	std::cout<< std::endl;
	std::cout << &list << std::endl;

	return 0;
}