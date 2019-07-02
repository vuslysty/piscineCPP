//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_SHRUBBERYCREATIONFORM_HPP
#define PISCINECPP_SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const &executor) const;
};


#endif //PISCINECPP_SHRUBBERYCREATIONFORM_HPP
