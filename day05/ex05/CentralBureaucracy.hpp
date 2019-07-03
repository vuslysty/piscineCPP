//
// Created by Vladyslav USLYSTYI on 2019-07-03.
//

#ifndef PISCINECPP_CENTRALBUREAUCRACY_HPP
#define PISCINECPP_CENTRALBUREAUCRACY_HPP


#include "OfficeBlock.hpp"
#include "Queue.hpp"

class CentralBureaucracy
{
	OfficeBlock	_block[20];
	Queue 		*queue;


public:

	class	BureaucracyIsFull : public std::exception
	{
	public:
		BureaucracyIsFull();
		BureaucracyIsFull(BureaucracyIsFull const &src) throw();
		BureaucracyIsFull &operator=(BureaucracyIsFull const &rhs);
		~BureaucracyIsFull() throw();

		const char 			*what(void) const throw();
	};


	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &ob);
	CentralBureaucracy	&operator=(CentralBureaucracy const &rhs);
	~CentralBureaucracy();


	void		addWorker(Bureaucrat *bureaucrat);
	void		queueUp(std::string	target);
	void		doBureaucracy();
};


#endif //PISCINECPP_CENTRALBUREAUCRACY_HPP
