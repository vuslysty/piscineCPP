//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include "Cat.hpp"

void Cat::readFromConsole()
{
	std::string	buf;

	while (!std::cin.eof())
	{
		std::getline(std::cin, buf, '\n');
		std::cout << buf << std::endl;
	}
}

bool	fileIsDirectory(std::string const & fileName)
{
	bool		is_directory;
	FILE		*fp = fopen(fileName.c_str(), "r");
	struct stat	fileInfo;

	fstat(fileno(fp), &fileInfo);
	if (S_ISREG(fileInfo.st_mode))
		is_directory = false;
	else
		is_directory = true;
	fclose(fp);
	return (is_directory);
}

void Cat::readFromFile(std::string const &fileName)
{
	std::ifstream	file(fileName, std::ifstream::in);
	std::filebuf* 	pbuf = file.rdbuf();
	std::size_t		size = pbuf->pubseekoff (0,file.end,file.in);
	char* 			buffer;

	if (file.is_open())
	{
		if (!fileIsDirectory(fileName))
		{
			pbuf->pubseekpos(0, file.in);
			buffer = new char[size];
			pbuf->sgetn(buffer, size);
			std::cout.write(buffer, size);
			delete[] buffer;
		}
		else
			std::cout << "cat: " << fileName << ": Is a directory" << std::endl;
		file.close();
	}
	else
		std::cout << "cat: " << fileName << ": No such file or directory" << std::endl;
}