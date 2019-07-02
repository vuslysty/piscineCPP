//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <sys/time.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
		Form("RobotomyRequestForm",  72, 45)
{
	struct timeval tv;

	gettimeofday(&tv, nullptr);
	srand((tv.tv_sec * 1000 + tv.tv_usec / 1000));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
		Form("RobotomyRequestForm",  72, 45)
{
	struct timeval tv;

	gettimeofday(&tv, nullptr);
	srand((tv.tv_sec * 1000 + tv.tv_usec / 1000));
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &) :
		Form("RobotomyRequestForm",  72, 45)
{
	srand(time(nullptr) * time(nullptr));
}

RobotomyRequestForm& RobotomyRequestForm::operator=(
		RobotomyRequestForm const &)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Trrrr dr vruf vruf brrrrrrr..." << std::endl;
	if (rand() % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << getTarget() << " hasn't been robotomized, "
							  "something goes wrong." << std::endl;
}