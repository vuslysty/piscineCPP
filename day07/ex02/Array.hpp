//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#ifndef PISCINECPP_ARRAY_HPP
#define PISCINECPP_ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	T				*_array;
	unsigned int	_len;

public:

	class	IllegalIndexOfArgument : public std::exception
	{
	public:
		IllegalIndexOfArgument() {};
		IllegalIndexOfArgument(IllegalIndexOfArgument const &) throw() {};
		IllegalIndexOfArgument &operator=(IllegalIndexOfArgument const &) {};
		~IllegalIndexOfArgument() throw() {};
		const char 			*what(void) const throw() { return ("Illegal index of argument"); };
	};


	Array<T>() {
		_array = nullptr;
		_len = 0;
	};

	Array<T>(unsigned int len) {
		_array = new T[len];
		_len = len;
	}

	Array<T>(Array const &src) {
		*this = src;
	}

	~Array<T>() {
		delete [] _array;
	}

	Array<T> &operator=(Array const &rhs) {
		this->_len = rhs._len;
		this->_array = new T[_len];

		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	T &operator[](const unsigned int index) {
		if (index >= _len)
			throw IllegalIndexOfArgument();
		return _array[index];
	}

	const unsigned int	&size() const {
		return (_len);
	}

};

#endif //PISCINECPP_ARRAY_HPP
