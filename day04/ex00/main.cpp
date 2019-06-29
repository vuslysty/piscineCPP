//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	Peon zoidberg("Zoidberg");

	std::cout << robert << jim << joe;

	std::cout << zoidberg;

	robert.polymorph(zoidberg);

	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}