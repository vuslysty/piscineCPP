//
// Created by Oleh IVANYTSKYI on 2019-06-30.
//

#include <cstdlib>
#include <ctime>
#include "Background.hpp"
#include <cstdlib>
#include <ctime>
#include "Background.hpp"

Background::Background() {}

Background::Background(Background const &src) {
	*this = src;
}

Background &Background::operator=(Background const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		return *this;
	}
	return *this;
}

Background::~Background() {
	delete (_space);
}


int Background::counter = 0;

Background::Background(int x, int y) : _xSize(x), _ySize(y)  {

	_space = new char[_ySize * _xSize];

	for (int i = 0; i < _ySize * _xSize; i++)
	{
		if (!(rand() % 30))
			_space[i] = ((rand() % 3) ? '.' : '*');
		else
			_space[i] = ' ';
	}
}



void Background::outputBackground()
{
	static clock_t t = clock();

	if ((float)(clock() - t)/CLOCKS_PER_SEC > .1)
	{
		Background::counter++;
		t = clock();
	}
	mvaddstr(0, 0, &_space[counter % _xSize]);
}
