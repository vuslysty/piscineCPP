//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*ptrSrt = &str;
	std::string	&refStr = str;

	//Display str using pointer:
	std::cout << *ptrSrt << std::endl;
	//Display str using reference:
	std::cout << refStr << std::endl;

	return (0);
}