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
		bur = new Bureaucrat("Hermes", 150);
		std::cout << *bur;


		for (int i = 0; i < 100; i++)
			bur->incrementGrade();
		std::cout << *bur;

		for (int i = 0; i < 49; i++)
			bur->incrementGrade();
		std::cout << *bur;

		for (int i = 0; i < 10; i++)
			bur->decrementGrade();
		std::cout << *bur;

//		for (int i = 0; i < 12; i++)
//			bur->incrementGrade();
//		std::cout << *bur;

		for (int i = 0; i < 200; i++)
			bur->decrementGrade();
		std::cout << *bur;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	if (bur)
		std::cout << *bur;

	return (0);
}