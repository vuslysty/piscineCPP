//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "Character.hpp"

Character::Character() :
	_score(0), _lives(3)
{
	this->_hp = 1;
	this->_damage = 1;

}

Character::Character(Character const &src)
{
	*this = src;
}

Character& Character::operator=(Character const &)
{
	return *this;
}

Character::~Character()
{
}

void Character::shoot(ListBlast **ListBlast) {
	ListBlast::push(ListBlast, new Blaster(true, _pos_x + 1, _pos_y - 1));
}

int Character::getScore() const {
	return _score;
}

void Character::setScore() {

}

int Character::getLives() const {
	return _lives;
}

void Character::setLives() {
	_hp--;
}

bool Character::checkColisions() {
	return false;
}

void Character::updateScore(Enemy *enemy)
{
	_score += enemy->getScore();
}