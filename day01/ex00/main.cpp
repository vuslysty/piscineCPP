//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("Jack", "Exmoor", 2, 120, 1);

	pony->getInfo();
	pony->saySomething();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony("Nancy", "Fabella", 4, 112, 0);

	pony.getInfo();
	pony.saySomething();
}

int main()
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}