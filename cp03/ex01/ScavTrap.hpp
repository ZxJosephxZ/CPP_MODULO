#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
    public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &copy);
		void	guardGate(void);
};
#endif