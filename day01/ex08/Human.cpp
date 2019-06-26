//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "Human.hpp"

Human::Human()
{
	this->f[0] = &Human::meleeAttack;
	this->f[1] = &Human::rangedAttack;
	this->f[2] = &Human::intimidatingShout;

	this->names[0] = "meleeAttack";
	this->names[1] = "rangedAttack";
	this->names[2] = "intimidatingShout";
}

void	Human::meleeAttack(std::string const &target)
{
	std::cout << __func__ << " called" << std::endl;
	std::cout << "Target: " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << __func__ << " called." << std::endl;
	std::cout << "Target: " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << __func__ << " called." << std::endl;
	std::cout << "Target: " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (action_name == names[i])
		{
			(this->*f[i])(target);
			return ;
		}
	}
	std::cout << "Action \"" << action_name << "\" unavailable." << std::endl;
}