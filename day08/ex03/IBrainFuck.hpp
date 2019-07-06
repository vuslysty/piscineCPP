//
// Created by Vladyslav USLYSTYI on 2019-07-06.
//

#ifndef PISCINECPP_IBRAINFUCK_HPP
#define PISCINECPP_IBRAINFUCK_HPP

#include <deque>

class ABrainFuck
{
	char _c;

public:

	typedef	std::deque<ABrainFuck>::iterator	iterator;

	ABrainFuck(char c) : _c(c) {};
	ABrainFuck() {};
	ABrainFuck(ABrainFuck const &) {};
	ABrainFuck &operator=(ABrainFuck const &) {return *this;};
	~ABrainFuck() {};


	virtual char 	getChar() const { return _c;};

	virtual	void	doOperation(unsigned char **, iterator &) {};
};

#endif //PISCINECPP_IBRAINFUCK_HPP
