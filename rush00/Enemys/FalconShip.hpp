//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_FALCONSHIP_HPP
#define RUSH00_FALCONSHIP_HPP


#include "../Enemy.hpp"

class FalconShip : public Enemy
{

public:
	FalconShip();
	FalconShip(int x, int y);

	FalconShip(FalconShip const &src);
	FalconShip &operator=(FalconShip const &rhs);
	~FalconShip();

	void	move();
};


#endif //RUSH00_FALCONSHIP_HPP
