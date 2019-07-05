//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#include <cstdlib>
#include <iostream>
#include <string>

#define SIZE 10

template <typename T>
void	iter(T *array, unsigned int len, void (*func)(T const &))
{
	unsigned int i = 0;

	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void	printArray(T *array, unsigned int len)
{
	for (unsigned int i = 0; i < len; i++)
	{
		std::cout << array[i];
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	iPlusTen(int const &i)
{
	std::cout << i + 10 << " ";
}

void	fDivideTwo(double const &d)
{
	std::cout << d / 2 << " ";
}

void	cChangeToAsterisk(char const &)
{
	std::cout << '*' << " ";
}

void	sToLower(std::string const &strOld)
{
	std::string	str = strOld;

	for (unsigned int i = 0; str[i] != '\0'; i++)
		str[i] = 'a' + (str[i] - 'A');
	std::cout << str << " ";
}

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	int			masI[SIZE];
	double 		masD[SIZE];
	char 		masC[SIZE];
	std::string	masS[SIZE];


	for(int i = 0; i < SIZE; i++)
	{
		masI[i] = rand() % 100;
		masD[i] = rand() % 100;
		masC[i] = 50 + rand() % 60;
		for (int j = 0; j < 10; j++)
			masS[i] += 65 + rand() % 26;
	}

	printArray(masI, SIZE);
	iter(masI, SIZE, iPlusTen);
	std::cout << std::endl << std::endl;


	printArray(masD, SIZE);
	iter(masD, SIZE, fDivideTwo);
	std::cout << std::endl << std::endl;


	printArray(masC, SIZE);
	iter(masC, SIZE, cChangeToAsterisk);
	std::cout << std::endl << std::endl;

	printArray(masS, SIZE);
	iter(masS, SIZE, sToLower);
	std::cout << std::endl << std::endl;


	return (0);
}