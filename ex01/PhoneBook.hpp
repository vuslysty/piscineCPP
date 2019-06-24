#ifndef PISCINECPP00_PHONEBOOK_HPP
#define PISCINECPP00_PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#define MAX_CONTACTS 8

class PhoneBook
{
	Contact	_contact[MAX_CONTACTS];
	int		_count;

public:
	PhoneBook(void);
	void	exitFunc(void);
	void	addFunc(void);
	void	searchFunc(void);

};


#endif
