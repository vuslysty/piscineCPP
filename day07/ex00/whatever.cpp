//
// Created by Vladyslav USLYSTYI on 2019-07-05.
//

#include <iostream>

template <typename T >
void	swap(T &arg1, T &arg2)
{
	T tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T		min(T &arg1, T &arg2)
{
	if (arg2 <= arg1)
		return arg2;
	else
		return (arg1);
}

template <typename T>
T		max(T &arg1, T &arg2)
{
	if (arg2 >= arg1)
		return arg2;
	else
		return (arg1);
}


class Awesome
{

public:

	Awesome(int n) : _n(n)
	{}
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

	int getNum() const { return _n; }

private:

	int _n;

};


int
main( void )
{
	int a = 2;
	int b = 3;


	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}