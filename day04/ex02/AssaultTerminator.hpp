//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_ASSAULTTERMINATOR_HPP
#define PISCINECPP_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &src);
	AssaultTerminator &operator=(AssaultTerminator const &rhs);
	~AssaultTerminator();

	ISpaceMarine	*clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};


#endif //PISCINECPP_ASSAULTTERMINATOR_HPP
