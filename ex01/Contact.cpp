#include <iomanip>
#include "Contact.hpp"

void	Contact::addContact()
{
	std::cout << "Enter a first name: ";
	std::getline(std::cin, first_name, '\n');
	std::cout << "Enter a last name: ";
	std::getline(std::cin, last_name, '\n');
	std::cout << "Enter a nickname: ";
	std::getline(std::cin, nickname, '\n');
	std::cout << "Enter a login: ";
	std::getline(std::cin, login, '\n');
	std::cout << "Enter a postal address: ";
	std::getline(std::cin, postal_address, '\n');
	std::cout << "Enter an email: ";
	std::getline(std::cin, email, '\n');
	std::cout << "Enter a birthday date: ";
	std::getline(std::cin, birthday, '\n');
	std::cout << "Enter a favorite meal: ";
	std::getline(std::cin, favorite_meal, '\n');
	std::cout << "Enter an underwear color: ";
	std::getline(std::cin, underwear_color, '\n');
	std::cout << "Enter a darkest secret: ";
	std::getline(std::cin, darkest_secret, '\n');
}

std::string	truncStr(std::string *atribute, size_t len)
{
	std::string	str;

	if (atribute->length() <= len)
		return (*atribute);
	else
	{
		str = atribute->substr(0, 10);
		str[9] = '.';
		return (str);
	}
}

void Contact::showShortContactList(int index)
{
	std::string	str;

	std::cout << '|';
	std::cout << std::setw(10) << index << '|';
	std::cout << std::setw(10) << truncStr(&first_name, 10) << '|';
	std::cout << std::setw(10) << truncStr(&last_name, 10) << '|';
	std::cout << std::setw(10) << truncStr(&nickname, 10) << '|' << std::endl;
}

void Contact::showLongContactList()
{
	std::cout << "First name :" << first_name << std::endl;
	std::cout << "Last name :" << last_name << std::endl;
	std::cout << "Nickname :" << nickname << std::endl;
	std::cout << "Login :" << login << std::endl;
	std::cout << "Postal address :" << postal_address << std::endl;
	std::cout << "Email :" << email << std::endl;
	std::cout << "Birthday date :" << birthday << std::endl;
	std::cout << "Favorite meal :" << favorite_meal << std::endl;
	std::cout << "Underwear color :" << underwear_color << std::endl;
	std::cout << "Darkest secret :" << darkest_secret << std::endl;
}