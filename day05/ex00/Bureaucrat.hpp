//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#ifndef PISCINECPP_BUREAUCRAT_HPP
#define PISCINECPP_BUREAUCRAT_HPP


#include <string>
#include <ostream>

class Bureaucrat
{
	const std::string	_name;
	uint8_t				_grade;

	class	GradeTooHighException : public std::exception
	{
	public:
//		GradeTooHighException();
//		GradeTooHighException(GradeTooHighException const &src);
//		GradeTooHighException &operator=(GradeTooHighException const &rhs);
//		~GradeTooHighException() throw();

		const char 			*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception
	{
//		GradeTooLowException();
//		GradeTooLowException(GradeTooLowException const &src);
//		GradeTooLowException &operator=(GradeTooLowException const &rhs);
//		~GradeTooLowException() throw();

		const char 			*what(void) const throw();
	};

public:

	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat	&operator=(Bureaucrat const &rhs);
	~Bureaucrat();


	std::string			getName() const;
	uint8_t 			getGrade() const;

	void				incrementGrade();
	void 				decrementGrade();
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);


#endif //PISCINECPP_BUREAUCRAT_HPP
