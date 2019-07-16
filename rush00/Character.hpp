//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_CHARACTER_HPP
#define RUSH00_CHARACTER_HPP


#include "Object.hpp"
#include "Lists/ListBlast.hpp"
#include "Enemy.hpp"

class Character : public Object
{

	int 	_score;
	int 	_lives;

public:

	Character();
	Character(Character const &src);
	Character &operator=(Character const &rhs);
	~Character();

	int 	getScore() const;
	void 	setScore();
	int 	getLives() const;
	void 	setLives();

	bool 	checkColisions();
	void	shoot(ListBlast **ListBlast);

	void	updateScore(Enemy *enemy);
};


#endif //RUSH00_CHARACTER_HPP
