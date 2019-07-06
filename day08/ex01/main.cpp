//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include <iostream>
#include "span.hpp"

int main()
{
	Span sp = Span(10);

	srand(static_cast<unsigned int>(time(nullptr)));

	try
	{
		for (int i = 0; i < 10; i++)
		{
			unsigned int	num = rand() % 100;
			sp.addNumber(static_cast<int>(num));
			std::cout << num << " ";
		}
		std::cout << std::endl;

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}