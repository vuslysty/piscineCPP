//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_BLASTER_HPP
#define RUSH00_BLASTER_HPP


#include "Object.hpp"

class Blaster : public Object
{
	bool	_ident;

public:
	Blaster();

	bool getIdent() const;

	Blaster(bool ident, int x, int y);
	Blaster(Blaster const &src);
	Blaster &operator=(Blaster const &rhs);
	~Blaster();

	void	move();
};


#endif //RUSH00_BLASTER_HPP
