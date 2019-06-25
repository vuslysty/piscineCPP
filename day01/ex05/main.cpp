//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//


#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}