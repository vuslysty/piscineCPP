//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "ListBlast.hpp"
#include <iostream>

ListBlast::ListBlast()
{
	this->_blaster = nullptr;
	this->_next = nullptr;
	this->_prev = nullptr;
}

ListBlast::ListBlast(Blaster *blaster)
{
	this->_blaster = blaster;
	this->_prev = nullptr;
	this->_next = nullptr;
}

ListBlast::ListBlast(ListBlast const &src)
{
	*this = src;
}

ListBlast& ListBlast::operator=(ListBlast const &)
{
	return *this;
}

ListBlast::~ListBlast()
{

}

ListBlast* ListBlast::getNext() const
{
	return (_next);
}

ListBlast* ListBlast::getPrev() const
{
	return (_prev);
}

Blaster* ListBlast::getBlaster() const
{
	return (_blaster);
}

//bool	isOriginalblaster(Blaster *blaster, ListBlast *ListBlast)
//{
//	while (ListBlast)
//	{
//		if (ListBlast->getBlaster() == blaster)
//			return (false);
//		ListBlast = ListBlast->getNext();
//	}
//	return (true);
//}

void ListBlast::push(ListBlast **list, Blaster *blaster)
{
//	ListBlast	*tmp = *list;

//	if (blaster && isOriginalblaster(blaster, *list))
	if (blaster)
	{
		ListBlast *newBlast = new ListBlast(blaster);
		if (!*list)
			*list = newBlast;
		else
		{
//			while (tmp->_next)
//			{
//				tmp = tmp->_next;
//				i++;
//			}
//			i++;
//			tmp->_next = newBlast;
//			newBlast->_prev = tmp;

			newBlast->_next = *list;
			(*list)->_prev = newBlast;
			*list = newBlast;
		}
	}
}

void ListBlast::delBlast(ListBlast **list, ListBlast **elem)
{
	ListBlast *tmp = *elem;

	if (*list && tmp)
	{
		if (*elem == *list) //first
		{
			*list = (*list)->_next;
			delete tmp->_blaster;
			delete tmp;
			*elem = nullptr;
		}
		else if ((*elem)->_next == nullptr) //end
		{
			(*elem)->_prev->_next = nullptr;
			*elem = (*elem)->_prev;
			delete tmp->_blaster;
			delete tmp;
		}
		else // middle
		{
			(*elem)->_prev->_next = (*elem)->_next;
			(*elem)->_next->_prev = (*elem)->_prev;
			(*elem) = (*elem)->_prev;
		}
	}
}

void ListBlast::delList(ListBlast **list)
{
	ListBlast	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->_next;
		delete (tmp->_blaster);
		delete (tmp);
		tmp->_blaster = nullptr;
	}
}

bool ListBlast::existAtCoord(int x, int y, ListBlast **orig) // For entery List
{
	ListBlast	*tmp = *orig;
	int 		elemX;
	int 		elemY;
	int 		elemX1;

	while (tmp)
	{
		elemX = tmp->getBlaster()->getPosX();
		elemY = tmp->getBlaster()->getPosY();
		elemX1 = elemX+1;

		if ((x == elemX1 || x == elemX) && y == elemY)
		{
			ListBlast::delBlast(orig, &tmp);
			return true;
		}
		tmp = tmp->_next;
	}
	return false;
}