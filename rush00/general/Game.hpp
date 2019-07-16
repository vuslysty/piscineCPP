//
// Created by Oleh IVANYTSKYI on 2019-06-30.
//

#ifndef RUSH00_GAME_HPP
#define RUSH00_GAME_HPP

#include <ncurses.h>
#include <unistd.h>
#include <string>
#include "../Object.hpp"
#include "../Lists/ListBlast.hpp"
#include "../Lists/ListEnemy.hpp"
#include "../Character.hpp"
#include "../Background.hpp"
#include "../Character.hpp"
#include "../Enemys/FalconShip.hpp"
class Game {

public:

	Game();
	~Game();

	void	generalLoop();



private:
	void dealKey(int i);

	int _winMaxX;
	int _winMaxY;
	Character	*player;
	ListBlast	*bullets;
	ListEnemy	*enemy;

	bool runOdj();
	void	outputEnemy();
	void	outputHero();
	void	outputBullets();
	Game(Game const &src);
	Game &operator=(Game const &rhs);
	void randomEnemy();
};


#endif //RUSH00_GAME_HPP
