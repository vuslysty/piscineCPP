//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Germes"), _grade(70)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(getGrade())
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &)
{
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

uint8_t		Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 <= 0)
		throw (GradeTooHighException());
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw (GradeTooLowException());
	else
		_grade++;
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {}
//
Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &) throw() {}
//
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &)
{
	return *this;
}
//
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade!");
}






Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(
		const Bureaucrat::GradeTooLowException &) throw()
{}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(
		const Bureaucrat::GradeTooLowException &)
{return *this;}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade!");
}





std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << (int)rhs.getGrade() << std::endl;
	return o;
}