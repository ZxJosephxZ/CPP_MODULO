#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}