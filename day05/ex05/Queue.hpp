//
// Created by Vladyslav USLYSTYI on 2019-07-03.
//

#ifndef PISCINECPP_QUEUE_HPP
#define PISCINECPP_QUEUE_HPP


#include <string>

class Queue
{
	std::string	_target;
	Queue		*_next;

public:

	Queue();
	Queue(std::string const &target);
	Queue(Queue const &src);
	Queue &operator=(Queue const &rhs);
	~Queue();

	Queue*		getNext() const;
	std::string	getTarget() const;

	void		setNext(Queue *next);

	static void			push(Queue **queue, std::string const &target);
	static std::string	pop(Queue **queue);

	static void			delQueue(Queue **queue);
};


#endif //PISCINECPP_QUEUE_HPP
