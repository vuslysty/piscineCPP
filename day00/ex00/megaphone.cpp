#include <iostream>

void	strToUpper(std::string &str)
{
	unsigned int		i;

	i = 0;
	while (i < str.length())
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	std::string	str;
	int 		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i++];
			strToUpper(str);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}