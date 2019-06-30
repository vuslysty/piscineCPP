//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef PISCINECPP_LISTListSquad_HPP
#define PISCINECPP_LISTListSquad_HPP

#include "ISpaceMarine.hpp"

class ListSquad
{
	ISpaceMarine	*_spaceMarine;
	ListSquad		*_next;

public:
	
	ListSquad();
	ListSquad(ISpaceMarine *spaceMarine);
	ListSquad(ListSquad const &src);
	ListSquad &operator=(ListSquad const &rhs);
	~ListSquad();
	
	
	int 			push(ListSquad **list, ISpaceMarine* spaceMarine);
	ListSquad		*getNext() const;
	ISpaceMarine	*getSpaceMarine() const;
	void 			delList(ListSquad **list);
};


#endif //PISCINECPP_LISTListSquad_HPP
