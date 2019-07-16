//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_SPACEBALLSHIP_HPP
#define RUSH00_SPACEBALLSHIP_HPP


#include "../Enemy.hpp"

class SpaceballShip : public Enemy
{
public:
	SpaceballShip();
	SpaceballShip(int x, int y);

	SpaceballShip(SpaceballShip const &src);
	SpaceballShip &operator=(SpaceballShip const &rhs);
	~SpaceballShip();

	void move();
};


#endif //RUSH00_SPACEBALLSHIP_HPP
