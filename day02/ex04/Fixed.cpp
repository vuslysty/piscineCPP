//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::bPointPosition = 8;

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = rhs.getRawBits();

	return (*this);
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

Fixed::Fixed(const int num)
{
//	std::cout << "Int constructor called" << std::endl;
	this->rawBits = num << bPointPosition;
}

Fixed::Fixed(const float num)
{
//	std::cout << "Float constructor called" << std::endl;
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

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->rawBits > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->rawBits < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->rawBits <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->rawBits != rhs.getRawBits());
}


Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->rawBits + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->rawBits - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	int64_t	num1 = this->rawBits;
	int64_t	num2 = rhs.getRawBits();
	Fixed	newObj;

	newObj.setRawBits((num1 * num2) >> bPointPosition);
	return (newObj);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	int64_t	num1 = this->rawBits;
	int64_t	num2 = rhs.getRawBits();
	Fixed	newObj;

	newObj.setRawBits(((num1 << bPointPosition ) / num2));
	return (newObj);
}

Fixed	&Fixed::operator++()
{
	this->rawBits += 1;
	return(*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->rawBits += 1;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->rawBits -= 1;
	return(*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->rawBits -= 1;
	return (tmp);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

Fixed const &Fixed::min(Fixed const &num1, Fixed const &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

Fixed const &Fixed::max(Fixed const &num1, Fixed const &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}