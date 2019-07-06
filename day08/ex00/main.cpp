//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#include <vector>
#include <iostream>
#include <array>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int >		vec;
	std::array<int, 42>		arr;
	std::list<int>			list;


	for (int i = -10; i < 10; i++)
		vec.push_back(i);

	for (unsigned int i = 0; i < 10; i++)
		arr.at(i) = static_cast<int>(i);

	for (unsigned int i = 0; i < 100; i++)
		list.push_front(static_cast<int>(i));


	std::vector<int >::iterator		findVec;
	std::array<int, 42>::iterator	findArr;
	std::list<int>::iterator		findList;


	std::cout << "Vector:" << std::endl;
	try
	{
		findVec = easyfind(vec, -10);
		std::cout << "You element " << *findVec << " was found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Array:" << std::endl;
	try
	{
		findArr = easyfind(arr, 0);
		std::cout << "You element " << *findArr << " was found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "List:" << std::endl;
	try
	{
		findList = easyfind(list, 36);
		std::cout << "You element " << *findList << " was found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "List:" << std::endl;
	try
	{
		findList = easyfind(list, 123);
		std::cout << "You element " << *findList << " was found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}