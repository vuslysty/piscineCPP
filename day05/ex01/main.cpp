//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*bur = nullptr;
	try
	{
		bur = new Bureaucrat("Hermes", 121);
		std::cout << *bur;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form		*form;

	try
	{
		form = new Form("25D", 120, 100);
		std::cout << *form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	if (form)
		form->beSigned(*bur);

	if (form && bur)
	{
		bur->incrementGrade();

		std::cout << *bur;

		form->beSigned(*bur);

		std::cout << *form;

	}

	return (0);
}