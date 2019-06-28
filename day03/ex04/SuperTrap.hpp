//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_SUPERTRAP_HPP
#define PISCINECPP_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap
{

public:

	SuperTrap();
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &rhs);
	~SuperTrap();

	using::FragTrap::rangedAttack;
	using::NinjaTrap::meleeAttack;
	using::FragTrap::vaulthunter_dot_exe;
	using::NinjaTrap::ninjaShoebox;
};


#endif //PISCINECPP_SUPERTRAP_HPP
