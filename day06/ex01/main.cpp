//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <string>
#include <iostream>

struct Data { std::string s1; int n; std::string s2; };



void *serialize()
{
	int 	len = (sizeof(char) * 8 * 2) + (sizeof(int));
	void	*mem = new char[len];

	size_t i = 0;

	for (int j = 0; j < 8; j++)
	{
		reinterpret_cast<char*>(mem)[i] = 'a' + reinterpret_cast<int>(rand()) % 26;
		i++;
	}

	*(reinterpret_cast<int*>(mem) + 2) = rand();

	i += sizeof(int);

	for (int j = 0; j < 8; j++)
	{
		reinterpret_cast<char*>(mem)[i] = 'A' + rand() % 26;
		i++;
	}

	return (mem);
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;

	data->s1.assign(reinterpret_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8);
	data->s2.assign(reinterpret_cast<char*>(raw) + 12, 8);

	return (data);
}

int main()
{
	time_t tm = time(nullptr);
	srand(*reinterpret_cast<unsigned int*>(&tm));

	Data *data = deserialize(serialize());

	std::cout << "string 1: " << data->s1 << std::endl;
	std::cout << "int     : " << data->n << std::endl;
	std::cout << "string 2: " << data->s2 << std::endl;

	return (0);
}