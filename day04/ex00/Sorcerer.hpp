//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_SORCERER_HPP
#define PISCINECPP_SORCERER_HPP

#include <string>

class Sorcerer
{
	std::string	name;
	std::string	title;

	Sorcerer();

public:

	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &src);
	Sorcerer &operator=(Sorcerer const &rhs);
	~Sorcerer();

	std::string	getName() const;
	std::string	getTitle() const;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif //PISCINECPP_SORCERER_HPP
