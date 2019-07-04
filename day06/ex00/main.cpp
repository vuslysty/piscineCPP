//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert convert(argv[1]);

		try
		{
			convert.validate();
			convert.getNumFromStr();
			convert.showFormatingNB();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "usage: ./convert [[char | int | float | double] value]" << std::endl;

	return (0);
}