//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_SQUAD_HPP
#define PISCINECPP_SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
	int 			_count;
	ISpaceMarine	*_spaceMarine;
	Squad			*_next;

	mutable	Squad	*curr;

	int 			pushCopy(ISpaceMarine*);
	Squad(ISpaceMarine *spaceMarine);
	Squad			*getCurr() const;
public:

	Squad();
	Squad(Squad const &src);
	Squad &operator=(Squad const &rhs);
	~Squad();

	int 			getCount() const;
	ISpaceMarine	*getUnit(int) const;
	ISpaceMarine	*getSpaceMarine() const;
	Squad			*getNext() const;
	int 			push(ISpaceMarine*);

};


#endif //PISCINECPP_SQUAD_HPP
