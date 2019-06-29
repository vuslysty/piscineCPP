//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_POWERFIRST_HPP
#define PISCINECPP_POWERFIRST_HPP


#include "AWeapon.hpp"

class PowerFirst : public AWeapon
{
public:

	PowerFirst();
	PowerFirst(PowerFirst const &src);
	PowerFirst &operator=(PowerFirst const &rhs);
	~PowerFirst();

	void	attack() const;
	AWeapon	*clone();
};


#endif //PISCINECPP_POWERFIRST_HPP
