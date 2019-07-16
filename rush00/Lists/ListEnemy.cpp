//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#include "ListEnemy.hpp"

#include <iostream>

ListEnemy::ListEnemy()
{
	this->_enemy = nullptr;
	this->_next = nullptr;
	this->_prev = nullptr;
}

ListEnemy::ListEnemy(Enemy *enemy)
{
	this->_enemy = enemy;
	this->_next = nullptr;
	this->_prev = nullptr;
}

ListEnemy::ListEnemy(ListEnemy const &src)
{
	*this = src;
}

ListEnemy& ListEnemy::operator=(ListEnemy const &)
{
	return *this;
}

ListEnemy::~ListEnemy()
{

}

ListEnemy* ListEnemy::getNext() const
{
	return (_next);
}

Enemy* ListEnemy::getEnemy() const
{
	return (_enemy);
}

//bool	isOriginalenemy(Enemy *enemy, ListEnemy *ListEnemy)
//{
//	while (ListEnemy)
//	{
//		if (ListEnemy->getEnemy() == enemy)
//			return (false);
//		ListEnemy = ListEnemy->getNext();
//	}
//	return (true);
//}

void	ListEnemy::push(ListEnemy **list, Enemy *enemy)
{
//	if (enemy && isOriginalenemy(enemy, *list))
	if (enemy)
	{
		ListEnemy *newEneny = new ListEnemy(enemy);
		if (!*list)
			*list = newEneny;
		else
		{
//			while (tmp->_next)
//			{
//				tmp = tmp->_next;
//				i++;
//			}
//			i++;
//			tmp->_next = newEneny;

			newEneny->_next = *list;
			(*list)->_prev = newEneny;
			*list = newEneny;
		}
	}
//	else
//		while (tmp)
//		{
//			i++;
//			tmp = tmp->_next;
//		}
//	return (i);
}


//void ListEnemy::delEnemy(ListEnemy **list, ListEnemy **elem)
//{
//	ListEnemy *tmp = *elem;
//
//	if (*list && tmp)
//	{
//		if (*elem == *list) //first
//			*list = (*list)->_next;
//		else if ((*elem)->_next == nullptr) //end
//			(*elem)->_prev->_next = nullptr;
//		else // middle
//		{
//			(*elem)->_prev->_next = (*elem)->_next;
//			(*elem)->_next->_prev = (*elem)->_prev;
//		}
//		delete (*elem)->_enemy;
//		if (tmp->_prev)
//			*elem = tmp->_prev;
//		else
//			*elem = nullptr;
//		delete tmp;
//	}
//}


void ListEnemy::delEnemy(ListEnemy **list, ListEnemy **elem)
{
	ListEnemy *tmp = *elem;

	if (*list && tmp)
	{
		if (*elem == *list) //first
		{
			*list = (*list)->_next;
			delete tmp->_enemy;
			delete tmp;
			*elem = nullptr;
		}
		else if ((*elem)->_next == nullptr) //end
		{
			(*elem)->_prev->_next = nullptr;
			*elem = (*elem)->_prev;
			delete tmp->_enemy;
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

void ListEnemy::delList(ListEnemy **list)
{
	ListEnemy *tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->_next;
		delete (tmp->_enemy);
		delete (tmp);
		tmp->_enemy = nullptr;
	}
}

bool ListEnemy::existAtCoord(int x, int y, ListEnemy **orig) // For entery List
{
	ListEnemy	*tmp = *orig;
	int 		elemX;
	int 		elemY;
	int 		elemX1;

	while (tmp)
	{
		elemX = tmp->getEnemy()->getPosX();
		elemY = tmp->getEnemy()->getPosY();
		elemX1 = elemX+1;

		if ((x == elemX1 || x == elemX) && y == elemY)
		{
			tmp->getEnemy()->minus1HP();
			if (tmp->getEnemy()->getHP() <= 0)
				ListEnemy::delEnemy(orig, &tmp);
			return true;
		}
		tmp = tmp->_next;
	}
	return false;
}