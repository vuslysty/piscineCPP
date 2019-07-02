//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <iostream>
#include "Form.hpp"

Form::Form() : _name("Germes"), _isSigned(false), _gradeForSign(1), _gradeForExecute(1)
{
}

Form::Form(std::string const &name, int gradeForSign, int gradeForExecute) :
		_name(name), _isSigned(false), _gradeForSign(gradeForSign),
		_gradeForExecute(gradeForExecute)
{
	if (gradeForSign < 1 || gradeForExecute < 1)
		throw (Form::GradeTooHighException());
	else if (gradeForSign > 150 || gradeForExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &src) : _name(src.getName()), _isSigned(src.getSignedState()),
	_gradeForSign(src.getGradeForSign()), _gradeForExecute(src.getGradeForExecute())
{
	*this = src;
}

Form& Form::operator=(Form const &)
{
	return *this;
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return (_name);
}

int Form::getGradeForSign() const
{
	return (_gradeForSign);
}

int Form::getGradeForExecute() const
{
	return (_gradeForExecute);
}

bool Form::getSignedState() const
{
	return (_isSigned);
}

std::string Form::getTarget() const
{
	return (_target);
}

void Form::setTarget(std::string const &target)
{
	this->_target = target;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeForSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _gradeForExecute)
		throw GradeTooLowException();
	else if (!_isSigned)
		throw FormIsNotSigned();
}


std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form \"" << rhs.getName() << "\", ";
	if (!rhs.getSignedState())
		o << "not ";
	o << "signed, grade for signing - " << rhs.getGradeForSign()
	<< ", grade for executing - " << rhs.getGradeForExecute() << std::endl;
	return (o);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form: Too low grade!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: Too high grade!");
}

const char* Form::FormIsNotSigned::what() const throw()
{
	return ("Form: Is not signed!");
}

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &) throw() {}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(const Form::GradeTooHighException &){return *this;}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &) throw() {}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(const Form::GradeTooLowException &){return *this;}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::FormIsNotSigned::FormIsNotSigned() {}
Form::FormIsNotSigned::FormIsNotSigned(const Form::FormIsNotSigned &) throw() {}
Form::FormIsNotSigned& Form::FormIsNotSigned::operator=(const Form::FormIsNotSigned &){return *this;}
Form::FormIsNotSigned::~FormIsNotSigned() throw() {}