//
// Created by Vladyslav USLYSTYI on 2019-06-28.
//

#ifndef PISCINECPP_SCAVTRAP_HPP
#define PISCINECPP_SCAVTRAP_HPP


#include <string>
#include "ClapTrap.hpp"

typedef unsigned int	uint_t;
#define	CHALLENGE_PHRASES 7

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap();

	void	challengeNewcomer();

	static std::string	challengePool[CHALLENGE_PHRASES];
};


#endif //PISCINECPP_SCAVTRAP_HPP