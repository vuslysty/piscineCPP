//
// Created by Vladyslav USLYSTYI on 2019-07-04.
//

#ifndef PISCINECPP_BASE_HPP
#define PISCINECPP_BASE_HPP


class Base
{
public:

	Base();
	Base(Base const &);
	Base &operator=(Base const &);
	virtual ~Base();
};


#endif //PISCINECPP_BASE_HPP
