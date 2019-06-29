//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_TACTICALMARINE_HPP
#define PISCINECPP_TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &src);
	TacticalMarine &operator=(TacticalMarine const &rhs);
	~TacticalMarine();

	ISpaceMarine	*clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;

};


#endif //PISCINECPP_TACTICALMARINE_HPP
