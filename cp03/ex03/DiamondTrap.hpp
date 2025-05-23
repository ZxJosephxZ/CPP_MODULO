#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap: public ScavTrap, public FragTrap{
    private:
		std::string	_name;
	public:
		/* Constructors & Destructors */
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap(void);

		/* Basic Operators */
		DiamondTrap	&operator=(DiamondTrap const &copy);

		/* Main Member Functions */
		void	whoAmI(void);
		void	attack(std::string const &target);

		
};
#endif