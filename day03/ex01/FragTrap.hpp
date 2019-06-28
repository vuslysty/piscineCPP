//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_FRAGTRAP_HPP
#define PISCINECPP_FRAGTRAP_HPP


#include <cstdint>
#include <string>

typedef unsigned int	uint_t;

class FragTrap
{
	std::string	name;
	int 		hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			lightJabAttackDamage;
	int			ironSideShootAttackDamage;
	int			ultraAttackDamage;
	int			armorDamageReduction;

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

	void	takeDamage(uint_t amount);
	void	beRepaired(uint_t amount);
	void	vaulthunter_dot_exe(std::string const &target);
};


#endif //PISCINECPP_FRAGTRAP_HPP
