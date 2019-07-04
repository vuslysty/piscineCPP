//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	i = rand() % 3;

	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	time_t tm = time(nullptr);
	srand(*reinterpret_cast<unsigned int*>(&tm));

	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);

	return (0);
}