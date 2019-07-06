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

	iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
		throw std::invalid_argument("Your number not found in container");

	return (iter);
}

#endif //PISCINECPP_EASYFIND_HPP
