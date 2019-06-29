//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_SUPERMUTANT_HPP
#define PISCINECPP_SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

	SuperMutant();
	SuperMutant(SuperMutant const &src);
	SuperMutant &operator=(SuperMutant const &rhs);
	~SuperMutant();

	void	takeDamage(int damage);
};


#endif //PISCINECPP_SUPERMUTANT_HPP
