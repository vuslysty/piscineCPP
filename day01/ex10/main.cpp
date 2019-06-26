//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <string>
#include "Cat.hpp"

int	main(int argc, char **argv)
{
	int 	i;

	if (argc == 1)
		Cat::readFromConsole();
	else
	{
		i = 1;
		while (i < argc)
		{
			Cat::readFromFile(argv[i]);
			i++;
		}
	}
	return (0);
}