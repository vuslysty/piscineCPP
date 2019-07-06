//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_MUTANTSTACK_HPP
#define PISCINECPP_MUTANTSTACK_HPP

#include <stack>
#include <stdexcept>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	using	std::stack<T, Container>::c;

public:

	MutantStack<T, Container>() {}

	MutantStack<T, Container>(MutantStack<T, Container> const &src)
	{
		*this = src;
	}

	MutantStack<T, Container> &operator=(MutantStack<T, Container> const &rhs)
	{
		if (&rhs != this)
			this->c = rhs.c;
		return *this;
	}

	~MutantStack<T, Container>() {}

	void	push(T const & elem)
	{
		c.push_front(elem);
	}

	void	pop()
	{
		if (c.size() == 0)
			throw std::out_of_range("Can't pop element from stack, it is empty");
		c.pop_front();
	}

	T	&top()
	{
		return (*c.begin());
	}

	typedef typename Container::iterator iterator;

	iterator begin()
	{
		return (c.begin());
	}

	iterator end() {
		return (c.end());
	}
};



#endif //PISCINECPP_MUTANTSTACK_HPP
