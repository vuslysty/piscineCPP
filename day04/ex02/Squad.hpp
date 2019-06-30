//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_SQUAD_HPP
#define PISCINECPP_SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "ListSquad.hpp"

class Squad : public ISquad
{
	int 			_count;
	ListSquad		*_listSquad;

public:

	Squad();
	Squad(Squad const &src);
	Squad &operator=(Squad const &rhs);
	~Squad();

	int 			getCount() const;
	ISpaceMarine	*getUnit(int) const;
	ListSquad		*getListSquad() const;
	int 			push(ISpaceMarine*);

};


#endif //PISCINECPP_SQUAD_HPP
