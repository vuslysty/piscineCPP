//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidenticalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{

	Bureaucrat	stupidBur("Zoidberg", 23);
	Bureaucrat	hermes("Hermes", 4);
	Intern		someIntern;

	OfficeBlock	officeBlock(&someIntern, &stupidBur, &hermes);


	try
	{
		officeBlock.doBureaucracy("president pardon", "Dave");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}