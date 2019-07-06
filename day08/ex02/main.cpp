//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << std::endl;

	MutantStack<int> s(mstack);

	s.pop();
	s.pop();
	s.push(42);
	s.push(21);
	s.push(24);

	std::cout << "Orig: ";

	it = mstack.begin();
	ite = mstack.end();

	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "   size: " << mstack.size() << std::endl;

	std::cout << "Copy: ";

	it = s.begin();
	ite = s.end();

	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "   size: " << s.size() << std::endl;

	try
	{
		std::cout << "Start popping 100 elements from Copy stack..." << std::endl;
		for (int i = 0; i < 100; i++)
			s.pop();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}

