#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitpoints <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to mode: \"Guard Gate\"." << std::endl;
}