//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include "span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span() {}

Span::Span(unsigned int len) : _len(len) {}

Span::Span(Span const &src)
{
	if (this != &src)
		*this = src;
}

Span& Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_set = rhs._set;
		this->_len = rhs._len;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_set.size() < _len)
		_set.insert(num);
	else
		throw std::out_of_range("Container is full");
}

unsigned int Span::longestSpan() const
{
	return (static_cast<unsigned int>(*(--_set.end()) - *_set.begin()));
}

unsigned int Span::shortestSpan() const
{
	std::multiset<int>::iterator	iter;
	std::multiset<int>::iterator	iterNext;
	std::multiset<int>::iterator	iterEnd;

	if (_set.size() < 2)
		throw std::length_error("Too few elements in container");

	iter = _set.begin();
	iterNext = _set.begin();
	iterNext++;
	iterEnd = _set.end();

	int shortestSpan = *iterNext - *iter;

	while (iterNext != iterEnd)
	{
		int diff = *iterNext - *iter;

		if (diff < shortestSpan)
			shortestSpan = diff;
		iter++;
		iterNext++;
	}
	return (static_cast<unsigned int>(shortestSpan));
}

std::multiset<int> Span::getContainer() const
{
	return (_set);
}