//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_Span_HPP
#define PISCINECPP_Span_HPP

#include <set>

class Span
{
	unsigned int		_len;
	std::multiset<int>	_set;

	Span();

public:

	Span(unsigned int);
	Span(Span const &);
	Span &operator=(Span const &);
	~Span();

	void	addNumber(int num);

	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

	std::multiset<int>	getContainer() const;
};


#endif //PISCINECPP_Span_HPP
