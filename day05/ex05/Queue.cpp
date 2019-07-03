//
// Created by Vladyslav USLYSTYI on 2019-07-03.
//

#include "Queue.hpp"

Queue::Queue()
{
	this->_target = "";
	this->_next = nullptr;
}

Queue::Queue(std::string const &target)
{
	this->_target = target;
	this->_next = nullptr;
}

Queue::Queue(Queue const &src)
{
	*this = src;
}

Queue& Queue::operator=(Queue const &)
{
	return *this;
}

Queue::~Queue()
{

}

Queue* Queue::getNext() const
{
	return (_next);
}

std::string Queue::getTarget() const
{
	return (_target);
}

void Queue::setNext(Queue *next)
{
	_next = next;
}

void		Queue::push(Queue **queue, std::string const &target)
{
	Queue	*tmp = *queue;

	Queue	*newQueue = new Queue(target);
	if (*queue)
		newQueue->setNext(tmp);
	*queue = newQueue;
}

std::string	Queue::pop(Queue **queue)
{
	Queue *tmp = *queue;
	std::string str;

	if (!*queue)
		throw;
	else if (tmp->getNext() == nullptr)
	{
		str = tmp->getTarget();
		delete *queue;
		*queue = nullptr;
		return (str);
	}
	else
	{
		while (tmp->getNext()->getNext())
			tmp = tmp->getNext();
		str = tmp->getNext()->getTarget();
		delete tmp->getNext();
		tmp->setNext(nullptr);
		return (str);
	}
	return ("");
}

void Queue::delQueue(Queue **queue)
{
	Queue	*tmp;

	while (*queue)
	{
		tmp = *queue;
		*queue = (*queue)->_next;
		delete (tmp);
	}
}