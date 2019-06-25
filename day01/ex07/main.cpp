//
// Created by Vladyslav USLYSTYI on 2019-06-25.
//

#include <fstream>
#include <iostream>
#include <sstream>


static void	replace_(std::string str, std::string fileName, std::string s1,
		std::string s2)
{
	std::ofstream	file(fileName + ".replace");
	std::size_t 	found = 0;

	while (found != std::string::npos)
	{
		found = str.find(s1, found);
		if (found != std::string::npos)
		{
			str.replace(found, s1.length(), s2);
			found += s1.length() + 1;
		}
	}
	file << str;
	file.close();
}

int main(int ac, char **av)
{
	std::ifstream	file;
	std::string		fileName;
	std::string		s1;
	std::string		s2;
	std::stringstream	stream;

	fileName = av[1];
	if (ac != 4)
		std::cout << "Wrong number arguments" << std::endl;
	else
	{
		s1 = av[2];
		s2 = av[3];
		file.open(fileName, std::ifstream::in);
		if (file.is_open())
		{

			if (!(s1.empty() || s2.empty()))
			{
				stream << file.rdbuf();
				replace_(stream.str(), fileName, s1, s2);
			}
			else
				std::cout << "Invalid params" << std::endl;
		}
		else
			std::cout << "Can't open file \"" << fileName << '\"' << std::endl;
	}
	file.close();



//	std::ifstream	ifs("numbers");
//
//	ifs.rdbuf();
//
//	unsigned int	dst;
//	unsigned int	dst2;
//	ifs >> dst >> dst2;
//
//	std::cout << dst << " " << dst2 << std::endl;
//	ifs.close();
//
//	//-----------------------------------------
//
//	std::ofstream	ofs("test.out");
//
//	ofs << "I like ponies a whole damn lot" << std::endl;
//	ofs.close();
}