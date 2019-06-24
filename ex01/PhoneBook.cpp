//
// Created by Vladyslav USLYSTYI on 2019-06-24.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0) {}

void	PhoneBook::exitFunc(void)
{
	std::cout << "Bye bye my little friend!" << std::endl;
	exit (0);
}

void	PhoneBook::addFunc(void)
{
	if (_count < MAX_CONTACTS)
	{
		_contact[_count].addContact(_count + 1);
		_count++;
	}
	else
		std::cout << "Your phone book is full, so you can't add any contact. "
			   "Sorry." << std::endl;
}