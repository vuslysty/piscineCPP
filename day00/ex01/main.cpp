#include "PhoneBook.hpp"

void	startProccess(PhoneBook *phoneBook)
{
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command, '\n');
		if (command == "EXIT" || std::cin.eof())
			break ;
		else if (command == "ADD")
			phoneBook->addFunc();
		else if (command == "SEARCH")
			phoneBook->searchFunc();
		else
			std::cout << "You entered invalid command, try again, "
						 "I believe you." << std::endl;
	}
}

int main()
{
	PhoneBook	phoneBook;

	std::cout << "I'm your phone book, use me for saving your contacts." << std::endl;
	std::cout << "I have just 3 commands:" << std::endl;
	std::cout << "ADD - for adding contact;" << std::endl;
	std::cout << "SEARCH - for searching full information about contacts;" << std::endl;
	std::cout << "EXIT - I don't know what do that command." << std::endl;
	std::cout << std::endl;
	startProccess(&phoneBook);
	phoneBook.exitFunc();
	return (0);
}