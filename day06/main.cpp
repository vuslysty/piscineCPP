//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <iostream>
#include "Convert.hpp"

int main()
{
	Convert	convert("''");

	try
	{
		convert.validate();

		convert.whatIsIt();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}


	return (0);
}