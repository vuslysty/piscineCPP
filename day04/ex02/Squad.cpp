//
// Created by Vladyslav USLYSTYI on 2019-06-29.
//

//#include "Squad.hpp"
#include <iostream>
#include "Squad.hpp"

Squad::Squad() : _count(0), _listSquad(nullptr)
{}

Squad::Squad(Squad const &src)
{
	this->_count = 0;
	this->_listSquad = nullptr;

	*this = src;
	return ;
}

Squad& Squad::operator=(Squad const &rhs)
{
	ListSquad	*tmp = rhs.getListSquad();

	this->_listSquad->delList(&_listSquad);
	this->_count = rhs.getCount();

	while (tmp)
	{
		_listSquad->push(&_listSquad, tmp->getSpaceMarine()->clone());
		tmp = tmp->getNext();
	}
	return (*this);
}

Squad::~Squad()
{
	_count = 0;
	_listSquad->delList(&_listSquad);
}

int Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int target) const
{
	int i = 0;
	ListSquad	*list = _listSquad;

	if (target >= _count)
		return (nullptr);
	else
	{
		while (i != target)
		{
			list = list->getNext();
			i++;
		}
		return (list->getSpaceMarine());
	}
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	_count = _listSquad->push(&_listSquad, spaceMarine);
	return (_count);
}

ListSquad* Squad::getListSquad() const
{
	return (_listSquad);
}