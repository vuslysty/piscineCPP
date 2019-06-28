//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_FRAGTRAP_HPP
#define PISCINECPP_FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

typedef unsigned int	uint_t;

class FragTrap : virtual public ClapTrap
{
protected:

	int			lightJabAttackDamage;
	int			ironSideShootAttackDamage;
	int			ultraAttackDamage;

	void	(FragTrap::*attacks[5])(std::string const &) const;

public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	lightJabAttack(std::string const &target) const;
	void	ironSideShootAttack(std::string const &target) const;
	void	ultraAttack(std::string const &target) const;

	void	vaulthunter_dot_exe(std::string const &target);
};


#endif //PISCINECPP_FRAGTRAP_HPP
