#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0) {}

void	PhoneBook::exitFunc(void)
{
	std::cout << std::endl;
	std::cout << "Bye bye my little friend!" << std::endl;
}

void	PhoneBook::addFunc(void)
{
	if (_count < MAX_CONTACTS)
	{
		_contact[_count].addContact();
		_count++;
		std::cout << "Thanks for new contact." << std::endl;
	}
	else
		std::cout << "Your phone book is full, so you can't add any contact. "
			   "Sorry." << std::endl;
	std::cout << std::endl;
}

static void	show_header_row()
{
	std::cout << '|';
	std::cout << std::setw (11) << "index|";
	std::cout << std::setw (11) << "first _name|";
	std::cout << std::setw (11) << "last _name|";
	std::cout << std::setw (11) << "nickname|";
	std::cout << std::endl;
}

void	PhoneBook::searchFunc()
{
	int	i;
	std::string tmp;

	i = 0;
	if (_count == 0)
	{
		std::cout << "Your phone book is empty." << std::endl;
		std::cout << std::endl;
		return ;
	}
	show_header_row();
	while (i < _count)
	{
		_contact[i].showShortContactList(i + 1);
		i++;
	}
	std::cout << std::endl;
	std::cout << "Choose contact's index to show all information about its: ";
	std::getline(std::cin, tmp, '\n');

	i = tmp[0] - '0';
	if (i <= _count && i > 0 && tmp.length() == 1)
		_contact[i - 1].showLongContactList();
	else
		std::cout << "Chosen contact's index is not exist." << std::endl;
	std::cout << std::endl;

}