//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#ifndef PISCINECPP_ENEMY_HPP
#define PISCINECPP_ENEMY_HPP


#include <string>

class Enemy
{
protected:

	int 		_hp;
	std::string	_type;

	Enemy();

public:

	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &src);
	Enemy &operator=(Enemy const &rhs);
	virtual ~Enemy();

	std::string	const	&getType() const;
	int 				getHP() const;

	virtual	void		takeDamage(int);
};


#endif //PISCINECPP_ENEMY_HPP
