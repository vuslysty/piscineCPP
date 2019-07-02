//
// Created by Vladyslav USLYSTYI on 2019-07-01.
//

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
		Form("ShrubberyCreationForm", 145, 137)
{
	srand(time(nullptr) * time(nullptr));
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
		Form("ShrubberyCreationForm", 145, 137)
{
	srand(time(nullptr) * time(nullptr));
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &) :
		Form("ShrubberyCreationForm", 145, 137)
{
	srand(time(nullptr) * time(nullptr));
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
		ShrubberyCreationForm const &)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	std::ofstream	ofs(getTarget() + "_shrubbery");
	ofs << "\n"
		   "\n"
		   "               ,@@@@@@@,\n"
		   "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		   "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		   "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		   "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		   "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		   "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		   "       |o|        | |         | |\n"
		   "       |.|        | |         | |\n"
		   "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

	ofs.close();
}