//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_FORM_HPP
#define PISCINECPP_FORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	_name;
	bool 				_isSigned;
	const int 			_gradeForSign;
	const int 			_gradeForExecute;

	class	GradeTooHighException : public std::exception
	{
	public:
		const char 			*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		const char 			*what(void) const throw();
	};

public:

	Form();
	Form(std::string const &name, int gradeForSign, int gradeForExecute);
	Form(Form const &src);
	Form	&operator=(Form const &rhs);
	~Form();

	std::string	getName() const;
	bool	getSignedState() const;
	int	getGradeForSign() const;
	int	getGradeForExecute() const;

	void	beSigned(Bureaucrat const &bureaucrat);
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);


#endif //PISCINECPP_FORM_HPP
