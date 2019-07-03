//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_BUREAUCRAT_HPP
#define PISCINECPP_BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <ostream>
#include "Form.hpp"
//#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string	_name;
	int					_grade;

	class	GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &src) throw();
		GradeTooHighException &operator=(GradeTooHighException const &rhs);
		~GradeTooHighException() throw();

		const char 			*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &src) throw();
		GradeTooLowException &operator=(GradeTooLowException const &rhs);
		~GradeTooLowException() throw();

		const char 			*what(void) const throw();
	};

public:

	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat	&operator=(Bureaucrat const &rhs);
	~Bureaucrat();


	std::string			getName() const;
	int		 			getGrade() const;

	void				incrementGrade();
	void 				decrementGrade();

	void				singForm(Form *) const;

	void				executeForm(Form *);

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);


#endif //PISCINECPP_BUREAUCRAT_HPP
