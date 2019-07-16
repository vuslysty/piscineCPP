#include <iostream>

#include <ncurses.h>
//#include "visualPart/Message.hpp"
#include "general/Game.hpp"


#include <unistd.h>
#define msleep(msec) usleep(msec*1000)

int main()
{
	Game	newGame;

	newGame.generalLoop();

}