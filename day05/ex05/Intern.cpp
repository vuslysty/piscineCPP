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
	Form	*form = nullptr;
	
	if (formName == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else if (formName == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (formName == "presidentical pardon")
		form = new PresidenticalPardonForm(target);
	else
	{
		std::cout << "Intern couldn't create \"" << formName
				  << "\". Stupid intern..." << std::endl;
		throw FormCanNotCreate();
	}
	std::cout << "Intern creates \"" << form->getName() << "\" form ";
	std::cout << "(s.grade " << form->getGradeForSign() << ", ex.grade ";
	std::cout << form->getGradeForExecute() << "). Target: \"" <<
	target << "\"" << std::endl;
	
	return (form);
}

const char* Intern::FormCanNotCreate::what() const throw()
{
	return ("Form can't created by intern!");
}

Intern::FormCanNotCreate::FormCanNotCreate() {}
Intern::FormCanNotCreate::FormCanNotCreate(const Intern::FormCanNotCreate &) throw() {}
Intern::FormCanNotCreate& Intern::FormCanNotCreate::operator=(const Intern::FormCanNotCreate &){return *this;}
Intern::FormCanNotCreate::~FormCanNotCreate() throw() {}