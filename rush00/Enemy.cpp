//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "Enemy.hpp"
//#include "Lists/ListBlast.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy& Enemy::operator=(Enemy const &)
{
	return *this;
}

Enemy::~Enemy()
{

}

void Enemy::shoot(ListBlast **ListBlast)
{
	ListBlast::push(ListBlast, new Blaster(false, _pos_x, _pos_y));
}

void Enemy::addEnemy(ListEnemy **listEnemy, Enemy *enemy)
{
	ListEnemy::push(listEnemy, enemy);
}

void Enemy::move()
{
	changePosition(_heading, 0);
}

int Enemy::getCount()
{
	return (count);
}

int Enemy::getScore() const
{
	return (_score);
}

const char *Enemy::getPic() const {
	return pic;
}

//void Enemy::addRandomEnemy(ListEnemy **listEnemy)
//{
//
//
//	ListEnemy::push(listEnemy, enemy);
//}