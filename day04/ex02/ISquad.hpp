//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_ISCUAD_HPP
#define PISCINECPP_ISCUAD_HPP

#include "ISpaceMarine.hpp"

class ISpaceMarine;

class ISquad
{
public:
	virtual 				~ISquad() {};
	virtual int 			getCount() const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int 			push(ISpaceMarine*) = 0;
};

#endif //PISCINECPP_ISCUAD_HPP