//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

//#include "Squad.hpp"
#include <iostream>
#include "Squad.hpp"

Squad::Squad(ISpaceMarine *spaceMarine) : _count(0), _spaceMarine(spaceMarine), _next(nullptr)
{
	curr = this;
}

Squad::Squad() : _count(0), _spaceMarine(nullptr), _next(nullptr)
{
	curr = this;
}

Squad::Squad(Squad const &src)
{
	*this = src;
	return ;
}

Squad* Squad::getCurr() const
{
	return (curr);
}

Squad& Squad::operator=(Squad const &rhs)
{
	Squad	*tmp = rhs.getCurr();
	this->_next = nullptr;
	this->_spaceMarine = nullptr;
	this->_count = 0;
	this->curr = this;

	this->_spaceMarine = tmp->_spaceMarine->clone();

	while (tmp)
	{
		this->_next->pushCopy(tmp->_spaceMarine);
		tmp = tmp->_next;
	}
	return (*this);
}

Squad::~Squad()
{
	Squad	*tmp = curr;

	if (tmp->_spaceMarine)
	{
		delete tmp->_spaceMarine;
		tmp->_spaceMarine = nullptr;
	}
	tmp = tmp->_next;
	if (tmp != nullptr)
		delete tmp;
//	delete curr;
}

int Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int target) const
{
	int i = 0;
	Squad	*squad;

	squad = curr;
	if (target >= _count)
		return (nullptr);
	else
	{
		while (i != target)
		{
			squad = squad->_next;
			i++;
		}
		return (squad->getSpaceMarine());
	}
}

ISpaceMarine* Squad::getSpaceMarine() const
{
	if (this != nullptr)
		return (_spaceMarine);
	else
		return (nullptr);
}

Squad* Squad::getNext() const
{
	return (_next);
}

bool	isOriginalSpaceMarine(ISpaceMarine *spaceMarine, Squad *squad)
{

	while (squad->getSpaceMarine())
	{
		if (squad->getSpaceMarine() == spaceMarine)
			return (false);
		squad = squad->getNext();
	}
	return (true);
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	Squad	*newSquad;
	Squad	*tmp;

	tmp = this;
	if (spaceMarine && isOriginalSpaceMarine(spaceMarine, this))
	{
		if (!_spaceMarine)
			_spaceMarine = spaceMarine;
		else
		{
			newSquad = new Squad(spaceMarine);
			while (tmp->_next)
				tmp = tmp->_next;
			tmp->_next = newSquad;
		}
		_count++;
	}
	return (_count);
}

int Squad::pushCopy(ISpaceMarine *spaceMarine)
{
	Squad	*newSquad;
	Squad	*tmp;

	tmp = this;
	if (spaceMarine && isOriginalSpaceMarine(spaceMarine, this))
	{
		if (!_spaceMarine)
			_spaceMarine = spaceMarine->clone();
		else
		{
			newSquad = new Squad(spaceMarine);
			while (tmp->_next)
				tmp = tmp->_next;
			tmp->_next = newSquad;
		}
		_count++;
	}
	return (_count);
}
