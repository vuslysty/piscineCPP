//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <iostream>
#include "Convert.hpp"

Convert::Convert() {}
Convert::Convert(std::string const &data) :
	_data(data), _isChar(false), _isInt(false), _isFloat(false), _isDouble(false),
	_tmpLong(0), __tmpLDouble(0)
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
					{4, 2, 3, 5, -3, 7, -1, 0},
					{8, 0, 0, 5, -3, 0, 0, 0},
					{8, 0, 0, 5, -3, 0, 0, 0},
					{8, 0, 0, 5, -3, 0, -1, 0},
					{9, 0, 0, 0, -3, 0, -2, 0},
					{0, 0, 0, 0, 0, 0, 0, 0},
					{10, 10, 10, 10, 10, 10, 0, 10},
					{8, 0, 0, 5, -3, 0, -1, 0},
					{9, 0, 0, 0, -3, 0, -2, 0},
					{0, 0, 0, 0, 0, -4, 0, 0}
			};
	int i = 0;
	int state = 1;

	while (1)
	{
		if (!fieldsIsEmpty())
		{
			if (_data[i] == '\0')
				break ;
			else
				throw ValidationError();
		}
		state = fsm[state - 1][getCondition(_data[i])];
		if (state == 0)
			throw ValidationError();
		else if (state < 0)
			i += (this->*finiteState[abs(state) - 1])();
		else
			i++;
	}
}

void Convert::whatIsIt()
{
	if (_isChar)
		std::cout << "It's CHAR" << std::endl;
	else if (_isFloat)
		std::cout << "It's FLOAT" << std::endl;
	else if (_isDouble)
		std::cout << "It's DOUBLE" << std::endl;
	else
		std::cout << "It's INT" << std::endl;
}

const char* Convert::ValidationError::what() const throw()
{
	return ("Not valid input.");
}

Convert::ValidationError::ValidationError() {}
Convert::ValidationError::ValidationError(const Convert::ValidationError &) throw() {}
Convert::ValidationError& Convert::ValidationError::operator=(const Convert::ValidationError &){return *this;}
Convert::ValidationError::~ValidationError() throw() {}