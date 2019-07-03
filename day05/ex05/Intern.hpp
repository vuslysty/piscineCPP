//
// Created by Vladyslav USLYSTYI on 2019-07-02.
//

#ifndef PISCINECPP_INTERN_HPP
#define PISCINECPP_INTERN_HPP

#include "Form.hpp"

class Intern
{

public:

	class	FormCanNotCreate : public std::exception
	{
	public:
		FormCanNotCreate();
		FormCanNotCreate(FormCanNotCreate const &src) throw();
		FormCanNotCreate &operator=(FormCanNotCreate const &rhs);
		~FormCanNotCreate() throw();

		const char 			*what(void) const throw();
	};
	
	Intern();
	Intern(Intern const &src);
	Intern	&operator=(Intern const &rhs);
	~Intern();

	Form	*makeForm(std::string const &formName, std::string const &target);
};


#endif //PISCINECPP_INTERN_HPP
