//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include "ZombieHorde.hpp"

int main()
{
	srand (time(NULL));

	ZombieHorde	zHorde(100);
	zHorde.annonce();
//	system("leaks -q day01_ex03");
	return (0);
}