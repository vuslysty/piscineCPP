//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#include <iostream>
#include "Array.hpp"
#define SIZE 10

template <typename T>
void	print(Array<T> array)
{
	for (unsigned int i = 0; i < array.size(); i++)
	{
		std::cout << array[i];
		if (i == array.size() - 1)
			std::cout << "." << std::endl;
		else
			std::cout << ", ";
	}
}

int main()
{
	Array<char > 		cArr(SIZE);
	Array<int >			iArr(SIZE);
	Array<float >		fArr(SIZE);
	Array<std::string >	sArr(SIZE);

	srand(static_cast<unsigned int>(time(nullptr)));

	for (unsigned int i = 0; i < cArr.size(); i++)
	{
		cArr[i] = static_cast<char>(40 + rand() % 80);
		iArr[i] = static_cast<int>(rand() % 100);
		fArr[i] = static_cast<float>(rand() % 100) / 2;

		for (unsigned int j = 0; j < 5; j++)
			sArr[i] += static_cast<char>(65 + rand() % 26);
	}

	print(cArr);
	print(iArr);
	print(fArr);
	print(sArr);

	return (0);
}