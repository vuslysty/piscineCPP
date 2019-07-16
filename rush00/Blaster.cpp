//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "Blaster.hpp"

Blaster::Blaster()
{
}

Blaster::Blaster(bool ident, int x, int y)
{
	this->_speed = 10;
	this->_hp = 1;
	this->_damage = 1;
	this->_ident = ident;
	if (!ident)
		_heading = -1;
	else
		_heading = 1;
	setPosXY(x, y + _heading);
}

Blaster::Blaster(Blaster const &src)
{
	*this = src;
}

Blaster& Blaster::operator=(Blaster const &)
{
	return *this;
}

Blaster::~Blaster()
{
}

void Blaster::move()
{
	changePosition(_heading, 0);
}

bool Blaster::getIdent() const {
	return _ident;
}
