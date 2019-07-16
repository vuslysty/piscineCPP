//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_FIREFLYSHIP_HPP
#define RUSH00_FIREFLYSHIP_HPP

#include "../Enemy.hpp"

class FireflyShip : public Enemy
{
public:
	FireflyShip();
	FireflyShip(int x, int y);

	FireflyShip(FireflyShip const &src);
	FireflyShip &operator=(FireflyShip const &rhs);
	~FireflyShip();

	void	move();
};


#endif //RUSH00_FIREFLYSHIP_HPP
