//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_LISTENEMY_HPP
#define RUSH00_LISTENEMY_HPP


#include "../Enemy.hpp"

class Enemy;

class ListEnemy
{
	Enemy		*_enemy;
	ListEnemy	*_next;
	ListEnemy	*_prev;

public:

	ListEnemy();
	ListEnemy(Enemy *Enemy);
	ListEnemy(ListEnemy const &src);
	ListEnemy &operator=(ListEnemy const &rhs);
	~ListEnemy();


	static void 	push(ListEnemy **list, Enemy* Enemy);
	static void		delEnemy(ListEnemy **list, ListEnemy **elem);


	ListEnemy		*getNext() const;
	Enemy			*getEnemy() const;
	static void 	delList(ListEnemy **list);

	bool 			existAtCoord(int x, int y, ListEnemy **orig);

};


#endif //RUSH00_LISTENEMY_HPP
