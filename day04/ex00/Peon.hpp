//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_PEON_HPP
#define PISCINECPP_PEON_HPP


#include "Victim.hpp"

class Peon : public Victim
{
	Peon();

public:

	Peon(std::string const &name);
	Peon(Peon const &src);
	Peon &operator=(Peon const &rhs);
	~Peon();

	virtual void		getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &o, Peon const &rhs);


#endif //PISCINECPP_PEON_HPP
