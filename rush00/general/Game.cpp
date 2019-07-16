//
// Created by Oleh IVANYTSKYI on 2019-06-30.
//


#include "Game.hpp"
#include "../Enemys/FireflyShip.hpp"
#include "../Enemys/SpaceballShip.hpp"

#define msleep(msec) usleep(msec*1000);



Game::Game() {
	player = new Character;
	enemy = nullptr;
	bullets = nullptr;
	initscr();
//	noecho();
	curs_set(0);
	keypad(stdscr, true);
	_winMaxX = getmaxx(stdscr);
	_winMaxY = getmaxy(stdscr);
	player->setPosX(1);
	player->setPosY(_winMaxY/2);
	addstr("Pres any key to start");
	 char str[100];
	getstr(str);
}

Game::Game(Game const &src) {
	*this = src;
}

Game &Game::operator=(Game const &rhs) {
	if (this != &rhs) // add coping inside if
	{

	}
	return *this;
}

Game::~Game() {
	delete (player);
	enemy->delList(&enemy);
	bullets->delList(&bullets);
	endwin();
}

void Game::generalLoop() {
	Background	starField(_winMaxX, _winMaxY);
	clock_t t, gametime;
	int 	spawn = 10;

	t = clock();
	gametime = t;
	srand(time(0));
	while ( true )
	{
		if (!player->getLives() || enemy->existAtCoord(player->getPosX(), player->getPosY(), &enemy))
			break ;
		if ((float)(clock() - t)/CLOCKS_PER_SEC > .05)
		{
			if (!runOdj())
				break ;
			if ((float)(clock() - t)/CLOCKS_PER_SEC > .005 && spawn-- > 0 && spawn < 3 )
			{
				randomEnemy();
			}
			if (spawn == 0)
				spawn = 20;
			t = clock();
		}
		nodelay(stdscr, TRUE);
		dealKey(getch());
		werase(stdscr);
		starField.outputBackground();
		outputEnemy();
		outputBullets();
		outputHero();
		mvaddstr(1, 2, "SCORE");
		printw( "  %.4D\n  Time   %.2d", player->getScore(), (clock() - gametime)/CLOCKS_PER_SEC );
		refresh();
	}
	werase(stdscr);
	mvaddstr((_winMaxY / 2) , (_winMaxX / 2), "GAME OVER");
	mvprintw((_winMaxY / 2) + 1 , (_winMaxX / 2) - 3,"FINAL SCORE : %d", player->getScore());
	refresh();
	sleep(3);

	return ;
}

void Game::dealKey(int i) {
	int x = player->getPosX();
	int y = player->getPosY();
	int moveX = 0;
	int moveY = 0;

	switch (i)
	{
		case KEY_UP:
			moveY = y > 0 ? -1 : 0;
			break;
		case KEY_DOWN:
			moveY = y < _winMaxY -1? 1 : 0;
			break ;
		case KEY_RIGHT:
			moveX = x < _winMaxX -2 ? 2 : 0;
			break ;
		case KEY_LEFT:
			moveX = x > 1 ? -2 : 0;
			break ;
		case KEY_EXIT:
			endwin();
			break ;
		case ' ' :
			player->shoot(&bullets);
	}
	player->changePosition(moveX,moveY);

}

void Game::outputEnemy() {
	Enemy		*tmp;
	ListEnemy	*tmpEnemy = enemy;
	while (tmpEnemy) {
		tmp = tmpEnemy->getEnemy();
		if (tmp->getPosY() < _winMaxY || tmp->getPosX() < _winMaxX)
			mvaddstr(tmp->getPosY(), tmp->getPosX(), tmp->getPic());
		else
		{
			tmpEnemy->delEnemy(&enemy, &tmpEnemy);
		}
		if (tmpEnemy)
			tmpEnemy = tmpEnemy->getNext();
	}
}

void Game::outputHero() {
	mvaddstr(player->getPosY(), player->getPosX(), "8=Q");
}

void Game::outputBullets() {
	Blaster		*tmp;
	ListBlast	*tmpList = bullets;

	while (tmpList) {
		tmp = tmpList->getBlaster();
		if (tmp->getPosX() < _winMaxX)
			mvaddstr(tmp->getPosY(), tmp->getPosX(), "-");
		else
		{
			ListBlast::delBlast(&bullets, &tmpList);
		}
		if (tmpList)
			tmpList = tmpList->getNext();

	}
}




bool Game::runOdj() {
	Blaster		*tmp = nullptr;
	ListBlast	*tmpList = bullets;

	while (tmpList) {
		tmp = tmpList->getBlaster();
		tmp->move();
		if (enemy->existAtCoord(tmp->getPosX(), tmp->getPosY(), &enemy))
			;
		if (tmpList)
			tmpList = tmpList->getNext();
	}
	Enemy		*tmpOne = nullptr;
	ListEnemy	*tmpEnemy = enemy;

	while (tmpEnemy) {
		tmpOne = tmpEnemy->getEnemy();
		if (bullets->existAtCoord(tmpOne->getPosX(), tmpOne->getPosY(), &bullets))
			player->updateScore(tmpOne);
		tmpOne->move();
		if (tmpEnemy)
			tmpEnemy = tmpEnemy->getNext();
	}
	return true;
}

void Game::randomEnemy() {
	int i = rand()%3;
	if (!i)
		enemy->push(&enemy, new FalconShip(_winMaxX - 2, rand() % _winMaxY));
	else if (i == 1)
		enemy->push(&enemy, new FireflyShip(_winMaxX - 2, rand() % _winMaxY));
	else
		enemy->push(&enemy, new SpaceballShip(_winMaxX - 2, rand() % _winMaxY));
}
