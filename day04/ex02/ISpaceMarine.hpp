//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_ISPACEMARINE_HPP
#define PISCINECPP_ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine	*clone() const = 0;
	virtual void 			battleCry() const = 0;
	virtual void 			rangedAttack() const = 0;
	virtual void 			meleeAttack() const = 0;
};

#endif //PISCINECPP_ISPACEMARINE_HPP