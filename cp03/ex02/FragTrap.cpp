#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap from ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	std::cout << "FragTrap from ClapTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap from ClapTrap " << this->_name << " destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitpoints <= 0)
		std::cout << "Cannot high five because: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << this->_name << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}