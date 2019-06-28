//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_CLAPTRAP_HPP
#define PISCINECPP_CLAPTRAP_HPP

#include <iostream>

typedef unsigned int	uint_t;

class ClapTrap
{

protected:
	std::string	name;
	int 		hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;


	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap();

public:
	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	takeDamage(uint_t amount);
	void	beRepaired(uint_t amount);
};


#endif //PISCINECPP_CLAPTRAP_HPP
