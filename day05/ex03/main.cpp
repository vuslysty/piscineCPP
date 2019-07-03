//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidenticalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"

int main()
{

	Bureaucrat	*stupidBur = nullptr;
	Bureaucrat	*hermes = nullptr;
	Form		*form = nullptr;
	Intern		someIntern;

	try
	{
		stupidBur = new Bureaucrat("Zoidberd", 130);
		hermes = new Bureaucrat("Hermes", 4);
		std::cout << *hermes;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = someIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	if (hermes && form)
	{
		hermes->executeForm(*form);
		stupidBur->singForm(*form);
		hermes->singForm(*form);
		stupidBur->executeForm(*form);
		hermes->executeForm(*form);
	}

	return (0);
}