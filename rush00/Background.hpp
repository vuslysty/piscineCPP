//
// Created by Oleh IVANYTSKYI on 2019-06-30.
//

#ifndef RUSH00_BACKGROUND_HPP
#define RUSH00_BACKGROUND_HPP

#include <ncurses.h>

class Background {

public:

	Background(int x, int y);
	void outputBackground();

	~Background();

private:

	static int counter;
	int _xSize;
	int _ySize;
	char *_space;
	Background();

	Background(Background const &src);
	Background &operator=(Background const &rhs);

};


#endif //RUSH00_BACKGROUND_HPP
