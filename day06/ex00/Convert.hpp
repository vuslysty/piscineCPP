//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#ifndef PISCINECPP_CONVERT_HPP
#define PISCINECPP_CONVERT_HPP


#include <string>

class Convert
{
	std::string	_data;
	bool		_isChar;
	bool		_isInt;
	bool		_isFloat;
	bool		_isDouble;
	long 		_tmpLong;
	long double	__tmpLDouble;
	bool		_special;

	int		itsInt();
	int		itsFloat();
	int		itsDouble();
	int		itsChar();

	bool	fieldsIsEmpty();

	class	ValidationError : public std::exception
	{
	public:
		ValidationError();
		ValidationError(ValidationError const &src) throw();
		ValidationError &operator=(ValidationError const &rhs);
		~ValidationError() throw();
		const char 			*what(void) const throw();
	};

public:

	Convert();
	Convert(std::string const &data);
	Convert(Convert const &);
	Convert &operator=(Convert const &);
	~Convert();

	void	validate();
	void	getNumFromStr();
	void	showFormatingNB();

};

bool	isDigit(char c);
bool	isPlus(char c);
bool	isMinus(char c);
bool	isDot(char c);
bool	isF(char c);
bool	isQuote(char c);
bool	isNull(char c);

#endif //PISCINECPP_CONVERT_HPP
