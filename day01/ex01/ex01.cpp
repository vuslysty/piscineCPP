//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string	*panthere;

	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main()
{
	memoryLeak();
//	system("leaks -q day01_ex01");
	return (0);
}