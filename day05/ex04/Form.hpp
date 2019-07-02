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
	std::string			_target;

public:

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

	class	FormIsNotSigned : public std::exception
	{
	public:
		FormIsNotSigned();
		FormIsNotSigned(FormIsNotSigned const &src) throw();
		FormIsNotSigned &operator=(FormIsNotSigned const &rhs);
		~FormIsNotSigned() throw();

		const char 			*what(void) const throw();
	};

	Form();
	Form(std::string const &name, int gradeForSign, int gradeForExecute);
	Form(Form const &src);
	Form	&operator=(Form const &rhs);
	virtual ~Form();

	std::string		getName() const;
	bool			getSignedState() const;
	int				getGradeForSign() const;
	int				getGradeForExecute() const;
	std::string		getTarget() const;

	void			setTarget(std::string const &target);

	void			beSigned(Bureaucrat const &bureaucrat);

	virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);


#endif //PISCINECPP_FORM_HPP
