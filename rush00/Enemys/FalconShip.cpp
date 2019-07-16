//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "FalconShip.hpp"

FalconShip::FalconShip() {}

FalconShip::FalconShip(int x, int y)
{
	_hp = 2;
	_damage = 1;
	_heading = -1;
	_speed = 2;
	_pos_y = y;
	_pos_x = x;
	_score = 20;
	pic[0] = '{';
	pic[1] = '>';
	pic[2] = '\0';
}

FalconShip::FalconShip(FalconShip const &src)
{
	*this = src;
}

FalconShip& FalconShip::operator=(FalconShip const &)
{
	return *this;
}

FalconShip::~FalconShip()
{

}
void FalconShip::move()
{
	count++;
	changePosition(_heading, count % 20 > 10 ? -1 : +1);
}