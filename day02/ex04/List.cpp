//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#include "List.hpp"



List::List()
{
	return ;
}

List::List(List const &src)
{
	*this = src;

	return ;
}

List::List(t_oper oper, std::string const &str) : oper(oper), num_str(str),
				next(nullptr)
{
	if (oper == OPEN_SCOPE)
		nbOpenScopes++;
	else if (oper == CLOSE_SCOPE)
		nbCloseScopes++;
}

List::~List()
{
	return ;
}

List &List::operator=(List const &rhs)
{
	this->num_str = rhs.num_str;
	this->oper = rhs.oper;
	this->next = rhs.next;

	return (*this);
}

List* List::getNext(List *list)
{
	if (list == nullptr)
		return (nullptr);
	else
		return (list->next);
}

void List::delList(List **list)
{
	List	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		delete tmp;
	}
}

void List::pushEnd(List **list, t_oper op, std::string const &n_str)
{
	List	*newList = new List(op, n_str);
	List	*tmp;

	if (*list == nullptr)
		*list = newList;
	else
	{
		tmp = *list;
		while (tmp->next != nullptr)
			tmp = tmp->next;
		tmp->next = newList;
	}
}

int List::nbOpenScopes = 0;
int List::nbCloseScopes = 0;