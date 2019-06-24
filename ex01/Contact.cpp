#include "Contact.hpp"

void	Contact::addContact(int	index)
{
	this->index = index;
	std::cout << "Enter your name: ";
	std::getline(std::cin, first_name, '\n');
	std::cout << "Enter your last name: ";
	std::getline(std::cin, last_name, '\n');
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, nickname, '\n');
	std::cout << "Enter your login: ";
	std::getline(std::cin, login, '\n');
	std::cout << "Enter your postal address: ";
	std::getline(std::cin, postal_address, '\n');
	std::cout << "Enter your email: ";
	std::getline(std::cin, email, '\n');
	std::cout << "Enter your birthday date: ";
	std::getline(std::cin, birthday, '\n');
	std::cout << "Enter your favorite meal: ";
	std::getline(std::cin, favorite_meal, '\n');
	std::cout << "Enter your underwear color: ";
	std::getline(std::cin, underwear_color, '\n');
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, darkest_secret, '\n');
}