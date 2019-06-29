//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const &type) :
		_hp(hp), _type(type)
{}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return ;
}

Enemy& Enemy::operator=(Enemy const &rhs)
{
	_type = rhs.getType();
	_hp = rhs.getHP();
	return (*this);
}

Enemy::~Enemy()
{
}

std::string	const& Enemy::getType() const
{
	return(_type);
}

int Enemy::getHP() const
{
	return(_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		if (damage >= _hp)
			_hp = 0;
		else
			_hp -= damage;
	}
}
