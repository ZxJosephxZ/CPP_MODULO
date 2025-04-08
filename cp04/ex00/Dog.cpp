#include "Dog.hpp"

Dog::Dog(void): _type("Dog")
{
	std::cout << "Dog from Animal " << Animal::_type << " created with default constructor." << std::endl;
}

Dog::Dog(std::string const &type): Animal(type), _type("Dog")
{
	std::cout << "Dog from Animal " << Animal::_type << " created." << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Dog from Animal " << Animal::_type << " copied." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog from Animal " << Animal::_type << " destroyed." << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignment operator for Dog from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::setType(std::string const &type)
{
	this->_type = type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal " << Animal::_type << " goes Bark!" << std::endl;
}