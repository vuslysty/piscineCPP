//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_NINJATRAP_HPP
#define PISCINECPP_NINJATRAP_HPP


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

	int (NinjaTrap::*attacks[2]);

public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &rhs);
	~NinjaTrap();

	void ninjaShoebox(FragTrap &enemy);
	void ninjaShoebox(ScavTrap &enemy);
	void ninjaShoebox(NinjaTrap &enemy);
};


#endif //PISCINECPP_NINJATRAP_HPP
