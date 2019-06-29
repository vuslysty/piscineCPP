//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_AWEAPON_HPP
#define PISCINECPP_AWEAPON_HPP


#include <string>

class AWeapon
{
protected:
	std::string	_name;
	int 		_apcost;
	int 		_damage;

	AWeapon();

public:

	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	AWeapon &operator=(AWeapon const &rhs);
	~AWeapon();

	std::string	const &getName() const;
	int 		getAPCost() const;
	int 		getDamage() const;

	virtual void attack() const = 0;
	virtual AWeapon	*clone() = 0;
};


#endif //PISCINECPP_AWEAPON_HPP
