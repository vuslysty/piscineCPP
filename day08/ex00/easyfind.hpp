//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#ifndef PISCINECPP_EASYFIND_HPP
#define PISCINECPP_EASYFIND_HPP

#include <stdexcept>
#include <iterator>

template <typename T>
typename T::iterator		easyfind(T &container, int num)
{
	typename T::iterator iter;
	typename T::iterator iterEnd;

	iter = container.begin();
	iterEnd = container.end();
	while (iter != iterEnd)
	{
		if (*iter == num)
			return (iter);
		else
			iter++;
	}
	throw std::invalid_argument("Your number not found in container");
}

#endif //PISCINECPP_EASYFIND_HPP
