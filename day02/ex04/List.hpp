//
// Created by Vladyslav USLYSTYI on 2019-06-27.
//

#ifndef PISCINECPP_LIST_HPP
#define PISCINECPP_LIST_HPP

#include <string>
#include "List.hpp"

typedef enum e_oper {NUMBER, PLUS, MINUS, DIVISION, MULT, OPEN_SCOPE, CLOSE_SCOPE} t_oper;

class List
{
	t_oper		oper;
	std::string	num_str;
	List		*next;

public:

	static int nbOpenScopes;
	static int nbCloseScopes;

	List();
	List(t_oper oper, std::string const &str);
	List(List const &src);
	~List();
	List &operator=(List const &rhs);

	List	*getNext(List *list);

	static void	pushEnd(List **list, t_oper oper, std::string const &num_str);

	static void	delList(List **list);
};


#endif //PISCINECPP_LIST_HPP
