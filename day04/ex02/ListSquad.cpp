//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "ListSquad.hpp"
#include <iostream>

ListSquad::ListSquad()
{
	this->_spaceMarine = nullptr;
	this->_next = nullptr;
}

ListSquad::ListSquad(ISpaceMarine *spaceMarine)
{
	this->_spaceMarine = spaceMarine;
	this->_next = nullptr;
}

ListSquad::ListSquad(ListSquad const &src)
{
	*this = src;
}

ListSquad& ListSquad::operator=(ListSquad const &)
{
	return *this;
}

ListSquad::~ListSquad()
{

}

ListSquad* ListSquad::getNext() const
{
	return (_next);
}

ISpaceMarine* ListSquad::getSpaceMarine() const
{
	return (_spaceMarine);
}

bool	isOriginalSpaceMarine(ISpaceMarine *spaceMarine, ListSquad *listSquad)
{
	while (listSquad)
	{
		if (listSquad->getSpaceMarine() == spaceMarine)
			return (false);
		listSquad = listSquad->getNext();
	}
	return (true);
}

int ListSquad::push(ListSquad **list, ISpaceMarine *spaceMarine)
{
	ListSquad	*tmp = *list;
	int 		i = 0;

	if (spaceMarine && isOriginalSpaceMarine(spaceMarine, *list))
	{
		i = 1;
		ListSquad *newList = new ListSquad(spaceMarine);
		if (!*list)
			*list = newList;
		else
		{
			while (tmp->_next)
			{
				tmp = tmp->_next;
				i++;
			}
			i++;
			tmp->_next = newList;
		}
	}
	else
		while (tmp)
		{
			i++;
			tmp = tmp->_next;
		}
	return (i);
}

void ListSquad::delList(ListSquad **list)
{
	ListSquad	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->_next;
		delete (tmp->_spaceMarine);
		delete (tmp);
		tmp->_spaceMarine = nullptr;
	}
}