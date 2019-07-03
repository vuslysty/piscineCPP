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
#include "CentralBureaucracy.hpp"

int main()
{
	srand(time(nullptr));

	std::string	names[] =
			{
				"David",
				"John",
				"Paul",
				"Mark",
				"James",
				"Andrew",
				"Scott",
				"Steven",
				"Robert",
				"Stephen",
				"William",
				"Craig",
				"Michael",
				"Stuart",
				"Christopher",
				"Alan",
				"Colin",
				"Brian",
				"Kevin",
				"Gary",
				"Richard",
				"Derek",
				"Martin",
				"Thomas",
				"Neil",
				"Barry",
				"Ian",
				"Jason",
				"Iain",
				"Gordon",
				"Alexander"
			};

	CentralBureaucracy	cb;

	try
	{
		for (int i = 0; i < 100; i++)
			cb.addWorker(new Bureaucrat(names[rand() % (sizeof(names) / sizeof(*names))], 1 + rand() % 150));
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	cb.queueUp("home");
	cb.queueUp("Vasya");

	for (int i = 0; i < 100; i++)
		cb.queueUp(names[rand() % (sizeof(names) / sizeof(*names))]);

	cb.doBureaucracy();
	return (0);
}