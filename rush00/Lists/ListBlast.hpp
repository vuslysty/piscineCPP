//
// Created by Vladyslav USLYSTYI on 2019-06-30.
//

#ifndef RUSH00_LISTBLAST_HPP
#define RUSH00_LISTBLAST_HPP


#include "../Blaster.hpp"
//#include "ListBlast.hpp"

class Blaster;

class ListBlast
{
	Blaster		*_blaster;
	ListBlast	*_next;
	ListBlast	*_prev;

public:

	ListBlast();
	ListBlast(Blaster *blaster);
	ListBlast(ListBlast const &src);
	ListBlast &operator=(ListBlast const &rhs);
	~ListBlast();


	static void 	push(ListBlast **list, Blaster* blaster);
	ListBlast		*getNext() const;
	ListBlast		*getPrev() const;
	Blaster			*getBlaster() const;
	static void 	delList(ListBlast **list);

	static void 	delBlast(ListBlast **list, ListBlast **elem);

	bool 			existAtCoord(int x, int y, ListBlast **orig); // перевірка чи існує пуля з такими кординатами
};


#endif //RUSH00_LISTBLAST_HPP
