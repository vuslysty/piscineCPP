//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string nm, std::string br, int age, int growth, bool sex)
{
	std::cout << "Pony is born" << std::endl;
	this->name = nm;
	this->breed = br;
	this->age = age;
	this->growth = growth;
	this->sex = sex;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name << " is died" << std::endl;
}

void Pony::getInfo()
{
	std::cout << "Pony's _name is " << this->name << std::endl;
	std::cout << "Breed is " << this->breed << std::endl;
	std::cout << "Age: " << this->age << " years old" << std::endl;
	std::cout << "Sex: ";
	if (this->sex)
		std::cout << "male" << std::endl;
	else
		std::cout << "female" << std::endl;
	std::cout << "Growth: " << this->growth << " centimeters" << std::endl;
}

void Pony::saySomething()
{
	std::cout << "Pony " << this->name << " says: \"IGOGO MAZAFAKA!\"" << std::endl;
}
