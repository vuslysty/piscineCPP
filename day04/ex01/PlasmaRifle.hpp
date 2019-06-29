//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_PLASMARIFLE_HPP
#define PISCINECPP_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	PlasmaRifle &operator=(PlasmaRifle const &rhs);
	~PlasmaRifle();

	void	attack() const;
	AWeapon	*clone();
};


#endif //PISCINECPP_PLASMARIFLE_HPP
