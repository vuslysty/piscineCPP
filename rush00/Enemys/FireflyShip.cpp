//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include <cstdlib>
#include "FireflyShip.hpp"

FireflyShip::FireflyShip() {}

FireflyShip::FireflyShip(int x, int y)
{
	_hp = 3;
	_damage = 1;
	_heading = -1;
	_speed = 2;
	_pos_y = y;
	_pos_x = x;
	_score = 30;
	pic[0] = 'K';
	pic[1] = 'H';
	pic[2] = '\0';

}

FireflyShip::FireflyShip(FireflyShip const &src)
{
	*this = src;
}

FireflyShip& FireflyShip::operator=(FireflyShip const &)
{
	return *this;
}

FireflyShip::~FireflyShip()
{

}

void FireflyShip::move()
{
	count++;

	if (count % 5 == 0)
		changePosition(_heading, rand() % 2 == 0 ? 1 : -1);
}