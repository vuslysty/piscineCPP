//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include "PresidenticalPardonForm.hpp"

PresidenticalPardonForm::PresidenticalPardonForm() :
		Form("PresidenticalPardonForm", 25, 5)
{}

PresidenticalPardonForm::PresidenticalPardonForm(std::string const &target) :
	Form("PresidenticalPardonForm", 25, 5)
{
	setTarget(target);
}

PresidenticalPardonForm::PresidenticalPardonForm(PresidenticalPardonForm const &) :
			Form("PresidenticalPardonForm", 25, 5)
{}

PresidenticalPardonForm& PresidenticalPardonForm::operator=(
		PresidenticalPardonForm const &)
{
	return *this;
}

PresidenticalPardonForm::~PresidenticalPardonForm() {}

void PresidenticalPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}