//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_ROBOTOMYREQUESTFORM_HPP
#define PISCINECPP_ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const &executor) const;
};


#endif //PISCINECPP_ROBOTOMYREQUESTFORM_HPP
