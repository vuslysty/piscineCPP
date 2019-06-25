//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#ifndef PISCINECPP_HUMAN_HPP
#define PISCINECPP_HUMAN_HPP


#include <string>

class Human
{
private:

	void	(Human::*f[3])(std::string const &);
	std::string	names[3];

	void	meleeAttack(std::string const &target);
	void	rangedAttack(std::string const &target);
	void	intimidatingShout(std::string const &target);

public:

	Human();
	void	action(std::string const &action_name, std::string const &target);
};


#endif //PISCINECPP_HUMAN_HPP
