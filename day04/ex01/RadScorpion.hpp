//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_RADSCORPION_HPP
#define PISCINECPP_RADSCORPION_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:

	RadScorpion();
	RadScorpion(RadScorpion const &src);
	RadScorpion &operator=(RadScorpion const &rhs);
	~RadScorpion();
};


#endif //PISCINECPP_RADSCORPION_HPP
