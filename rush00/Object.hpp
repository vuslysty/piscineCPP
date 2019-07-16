//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_OBJECT_HPP
#define RUSH00_OBJECT_HPP

#include <ctime>

typedef	enum  eId {CHARACTER, ENEMY} eIdent;

class Object
{
protected:

	int 	_pos_x;
	int 	_pos_y;

	int 	_hp;
	int 	_damage;

	int		_speed;
	int		_heading;

	clock_t	_tik;

	Object();
	Object(int x, int y);

//	static ListBlast	*listBlast;
//	static ListEnemy	*listEnemy;

public:


	Object(Object const &src);
	Object &operator=(Object const &rhs);
	virtual ~Object();

	int 	getPosX() const;
	int 	getPosY() const;
	int 	getHP() const;
	int 	getDamage() const;
	int 	getHeadind() const;
	int 	getSpeed() const;

	void setHp(int hp);

	clock_t getTik() const;


	void	setTic(clock_t tik);
	void 	setPosX(int x);
	void	setPosY(int y);
	void	setPosXY(int x, int y);

	void	minus1HP();

	void 	changePosition(int x, int y);
//	virtual void checkColision();
};

#endif //RUSH00_OBJECT_HPP
