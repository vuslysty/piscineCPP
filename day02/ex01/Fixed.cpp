//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::bPointPosition = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = rhs.getRawBits();

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = num << bPointPosition;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = (int)roundf(num * pow(2, bPointPosition));
}

float Fixed::toFloat() const
{
	return (this->rawBits / pow(2, bPointPosition));
}

int Fixed::toInt() const
{
	return (this->rawBits >> 8);
}

