//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_ENEMY_HPP
#define RUSH00_ENEMY_HPP

#include "Lists/ListEnemy.hpp"
#include "Lists/ListBlast.hpp"
#include "Object.hpp"

class ListBlast;
class ListEnemy;

class Enemy : public Object {

protected:
	int count;
	int _score;
	char pic[3];
public:
	const char *getPic() const;

public:

	Enemy();
	Enemy(Enemy const &src);
	Enemy &operator=(Enemy const &rhs);
	virtual ~Enemy();

	void	shoot(ListBlast **listBlast);
	virtual void	move();

//	static void	addRandomEnemy(ListEnemy **listEnemy);
	static void addEnemy(ListEnemy **listEnemy, Enemy *enemy);

	int getScore() const ;
	int getCount();
};


#endif //RUSH00_ENEMY_HPP
