//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_SCAVTRAP_HPP
#define PISCINECPP_SCAVTRAP_HPP


#include <string>

typedef unsigned int	uint_t;
#define	CHALLENGE_PHRASES 7

class ScavTrap
{
	std::string	name;
	int 		hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;

public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	takeDamage(uint_t amount);
	void	beRepaired(uint_t amount);
	void	challengeNewcomer();

	static std::string	challengePool[CHALLENGE_PHRASES];
};


#endif //PISCINECPP_SCAVTRAP_HPP