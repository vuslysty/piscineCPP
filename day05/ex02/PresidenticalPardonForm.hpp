//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_PRESIDENTICALPARDONFORM_HPP
#define PISCINECPP_PRESIDENTICALPARDONFORM_HPP


#include <string>

class PresidenticalPardonForm
{

private:
	
	PresidenticalPardonForm();
	PresidenticalPardonForm(std::string const &name, int grade);
	PresidenticalPardonForm(PresidenticalPardonForm const &src);
	PresidenticalPardonForm	&operator=(PresidenticalPardonForm const &rhs);
	~PresidenticalPardonForm();
};


#endif //PISCINECPP_PRESIDENTICALPARDONFORM_HPP
