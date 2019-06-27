//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#ifndef PISCINECPP_FIXED_HPP
#define PISCINECPP_FIXED_HPP


class Fixed
{
	int			rawBits;

	static int	bPointPosition;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const &src);
	Fixed(const int num);
	Fixed(const float num);
	float	toFloat() const;
	int 	toInt() const;

	Fixed	&operator=(Fixed const &rhs);

	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	&operator++();
	const Fixed	operator++(int);

	Fixed	&operator--();
	const Fixed	operator--(int);


	int getRawBits() const;
	void setRawBits(int const raw);

	static Fixed	&min(Fixed &num1, Fixed &num2);
	static Fixed	&max(Fixed &num1, Fixed &num2);

	static Fixed const	&min(Fixed const &num1, Fixed const &num2);
	static Fixed const	&max(Fixed const &num1, Fixed const &num2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif //PISCINECPP_FIXED_HPP
