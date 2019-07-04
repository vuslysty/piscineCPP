//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <iostream>
#include <sstream>
#include "Convert.hpp"
#include <string>
#include <cfloat>
#include <iomanip>

Convert::Convert() {}
Convert::Convert(std::string const &data) :
	_data(data), _isChar(false), _isInt(false), _isFloat(false), _isDouble(false),
	_tmpLong(0), __tmpLDouble(0), _special(false)
{}

Convert::Convert(Convert const &) {}
Convert& Convert::operator=(Convert const &) {return *this;}
Convert::~Convert() {}

bool	Convert::fieldsIsEmpty()
{
	return (!(_isChar || _isInt || _isFloat || _isDouble));
}



int 	getCondition(char c)
{
	static bool	(*condition[7])(char) = {isDigit, isPlus, isMinus, isDot, isF, isQuote, isNull};
	int i = 0;

	while (i < 7)
	{
		if (condition[i](c))
			break ;
		i++;
	}
	return (i);
}


void Convert::validate()
{
	static int	(Convert::*finiteState[4])(void) =
			{&Convert::itsInt, &Convert::itsDouble, &Convert::itsFloat, &Convert::itsChar};
	int fsm[10][8] =
			{
					{4, 2, 3, 5, 0, 7, -1, 0},
					{8, 0, 0, 5, 0, 0, 0, 0},
					{8, 0, 0, 5, 0, 0, 0, 0},
					{8, 0, 0, 5, -3, 0, -1, 0},
					{9, 0, 0, 0, 0, 0, -2, 0},
					{0, 0, 0, 0, 0, 0, 0, 0},
					{10, 10, 10, 10, 10, 10, 0, 10},
					{8, 0, 0, 5, -3, 0, -1, 0},
					{9, 0, 0, 0, -3, 0, -2, 0},
					{0, 0, 0, 0, 0, -4, 0, 0}
			};

	std::string	special[] = {"-inf", "-inff", "+inf", "+inff", "inf", "inff", "nan", "nanf"};
	int i = 0;
	int state = 1;

	if (_data[0] == '\0')
		throw ValidationError();

	for (int count = 0; count < 6; count++)
	{
		if (_data == special[count])
		{
			_special = true;
			_isDouble = true;
			return ;
		}
	}

	while (1)
	{
		if (!fieldsIsEmpty())
		{
			if (_data[static_cast<size_t>(i)] == '\0')
				break ;
			else
				throw ValidationError();
		}
		state = fsm[state - 1][getCondition(_data[static_cast<size_t>(i)])];
		if (state == 0)
			throw ValidationError();
		else if (state < 0)
			i += (this->*finiteState[abs(state) - 1])();
		else
			i++;
	}
}


void Convert::getNumFromStr()
{
	if (_isDouble || _isFloat)
		__tmpLDouble = std::stold(_data);
	else if (_isInt)
		_tmpLong = std::stol(_data);
	else
		_tmpLong = static_cast<long>(_data[1]);
}


void Convert::showFormatingNB()
{
	bool mod = _isDouble || _isFloat;

		std::cout << "char: ";
		if ((mod ? __tmpLDouble : _tmpLong) >= CHAR_MIN && (mod ? __tmpLDouble : _tmpLong) <= CHAR_MAX)
			if (isgraph(static_cast<char>((mod ? __tmpLDouble : _tmpLong))))
				std::cout << "'" << static_cast<char>((mod ? __tmpLDouble : _tmpLong)) << "'";
			else
				std::cout << "Non displayable";
		else
			std::cout << "impossible";
		std::cout << std::endl;

		////////////////////////////////

		std::cout << "int: ";
		if ((mod ? __tmpLDouble : _tmpLong) >= INT_MIN && (mod ? __tmpLDouble : _tmpLong) <= INT_MAX)
			std::cout << static_cast<int>((mod ? __tmpLDouble : _tmpLong));
		else
			std::cout << "impossible";
		std::cout << std::endl;

		////////////////////////////////

		std::cout << "float: ";
		if ((mod ? __tmpLDouble : _tmpLong) >= -FLT_MAX && (mod ? __tmpLDouble : _tmpLong) <= FLT_MAX)
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>((mod ? __tmpLDouble : _tmpLong)) << "f";
		else
		{
			if (_special)
				std::cout << __tmpLDouble << "f";
			else
				std::cout << "impossible";
		}
		std::cout << std::endl;

		////////////////////////////////

		std::cout << "double: ";
		if ((mod ? __tmpLDouble : _tmpLong) >= -DBL_MAX && (mod ? __tmpLDouble : _tmpLong) <= DBL_MAX)
			std::cout << std::fixed << std::setprecision(1) << static_cast<double>((mod ? __tmpLDouble : _tmpLong));
		else
		{
			if (_special)
				std::cout << __tmpLDouble;
			else
				std::cout << "impossible";
		}
		std::cout << std::endl;

}

const char* Convert::ValidationError::what() const throw()
{
	return ("Not valid input.");
}

Convert::ValidationError::ValidationError() {}
Convert::ValidationError::ValidationError(const Convert::ValidationError &) throw() {}
Convert::ValidationError& Convert::ValidationError::operator=(const Convert::ValidationError &){return *this;}
Convert::ValidationError::~ValidationError() throw() {}