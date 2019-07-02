//
// Created by Vladyslav USLYSTYI on 2019-07-02.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidenticalPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &) {}

Intern& Intern::operator=(Intern const &)
{
	return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm(std::string const &formName, std::string const &target)
{
	static std::string	forms[3] =
			{
				"shrubbbery creation",
				"robotomy request",
				"president pardon"
			};

	for (int i = 0; i < 3; i++)
		if (formName == forms[i])
		{
			std::cout << "Intern creates \"" << forms[i] << "\" form" << std::endl;
			if (i == 0)
				return new ShrubberyCreationForm(target);
			else if (i == 1)
				return new RobotomyRequestForm(target);
			else
				return new PresidenticalPardonForm(target);
		}

	std::cout << "Intern couldn't create \"" << formName << "\". Stupid intern..." << std::endl;

	return (nullptr);
}

