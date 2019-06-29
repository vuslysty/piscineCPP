//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_VICTIM_HPP
#define PISCINECPP_VICTIM_HPP


#include <string>

class Victim
{
protected:
	std::string	name;

	Victim();

public:

	Victim(std::string const &name);
	Victim(Victim const &src);
	Victim &operator=(Victim const &rhs);
	~Victim();

	std::string	getName() const;
	virtual void		getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);


#endif //PISCINECPP_VICTIM_HPP
