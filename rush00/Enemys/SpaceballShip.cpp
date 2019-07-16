//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "SpaceballShip.hpp"

SpaceballShip::SpaceballShip() {}

SpaceballShip::SpaceballShip(int x, int y)
{
	_hp = 1;
	_damage = 1;
	_heading = -1;
	_speed = 2;
	_pos_y = y;
	_pos_x = x;
	pic[0] = '}';
	pic[1] = '{';
	pic[2] = '\0';
	_score = 10;
}

SpaceballShip::SpaceballShip(SpaceballShip const &src)
{
	*this = src;
}

SpaceballShip& SpaceballShip::operator=(SpaceballShip const &)
{
	return *this;
}

SpaceballShip::~SpaceballShip()
{

}

void SpaceballShip::move()
{
	changePosition(_heading, 0);
}