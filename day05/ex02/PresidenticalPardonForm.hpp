//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_PRESIDENTICALPARDONFORM_HPP
#define PISCINECPP_PRESIDENTICALPARDONFORM_HPP


#include <string>
#include "Form.hpp"

class PresidenticalPardonForm : public Form
{

public:
	
	PresidenticalPardonForm();
	PresidenticalPardonForm(std::string const &target);
	PresidenticalPardonForm(PresidenticalPardonForm const &src);
	PresidenticalPardonForm	&operator=(PresidenticalPardonForm const &rhs);
	~PresidenticalPardonForm();

	void	execute(Bureaucrat const &executor) const;
};


#endif //PISCINECPP_PRESIDENTICALPARDONFORM_HPP
