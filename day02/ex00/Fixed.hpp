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
	Fixed &operator=(Fixed const &rhs);
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif //PISCINECPP_FIXED_HPP
