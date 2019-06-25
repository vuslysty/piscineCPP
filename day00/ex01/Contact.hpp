#ifndef PISCINECPP00_CONTACT_HPP
#define PISCINECPP00_CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:

	void	addContact();
	void	showShortContactList(int index);
	void	showLongContactList();
};


#endif