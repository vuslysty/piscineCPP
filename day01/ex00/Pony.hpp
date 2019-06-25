//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP00_PONY_HPP
#define PISCINECPP00_PONY_HPP

#include <string>

class Pony
{
	std::string	name;
	std::string	breed;
	bool		sex;
	int			age;
	int 		growth;

public:

	Pony(std::string nm, std::string br, int age, int growth, bool sex);
	~Pony();

	void	getInfo();
	void	saySomething();
};


#endif
