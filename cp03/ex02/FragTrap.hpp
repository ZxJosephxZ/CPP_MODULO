#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap:public ClapTrap{
    public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);		
		FragTrap	&operator=(FragTrap const &copy);
		void	highFivesGuys(void);
};
#endif