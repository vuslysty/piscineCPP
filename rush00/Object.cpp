//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "Object.hpp"
#include <iostream>

Object::Object()
{}

Object::Object(int x, int y) : _pos_x(x), _pos_y(y)
{
}

Object::Object(Object const &src)
{
	*this = src;
}

Object& Object::operator=(Object const &)
{
	return *this;
}

Object::~Object()
{
}

int Object::getHP() const
{
	return (_hp);
}

int Object::getDamage() const
{
	return (_damage);
}

int Object::getPosX() const
{
	return (_pos_x);
}

int Object::getPosY() const
{
	return (_pos_y);
}

int Object::getSpeed() const
{
	return (_speed);
}

int Object::getHeadind() const
{
	return (_heading);
}

clock_t Object::getTik() const
{
	return (_tik);
}

void Object::setTic(clock_t tik)
{
	this->_tik = tik;
}

void Object::setPosX(int x)
{
	this->_pos_x = x;
}

void Object::setPosXY(int x, int y)
{
	this->_pos_x = x;
	this->_pos_y = y;
}


void Object::setPosY(int y)
{
	this->_pos_y = y;
}

void Object::changePosition(int x, int y)
{
	this->_pos_x += x;
	this->_pos_y += y;
}

void Object::minus1HP()
{
	this->_hp--;
}

//ListBlast	*Object::listBlast = nullptr;
//ListEnemy	*Object::listEnemy = nullptr;