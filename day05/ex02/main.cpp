//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidenticalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	Bureaucrat	*bur = nullptr;
	try
	{
		bur = new Bureaucrat("Hermes", 4);
		std::cout << *bur;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form		*form;

	try
	{
		form = new ShrubberyCreationForm("Dick");
		std::cout << *form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

//	if (bur)
//		bur->executeForm(*form);
//
//	if (bur)
//		bur->singForm(*form);

	if (bur)
		bur->executeForm(*form);

	if (bur)
		bur->singForm(*form);

	if (bur)
		bur->executeForm(*form);

//	if (form && bur)
//	{
//		bur->incrementGrade();
//
//		std::cout << *bur;
//
//		bur->singForm(*form);
//
//		std::cout << *form;
//
//	}

	return (0);
}