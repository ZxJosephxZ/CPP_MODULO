#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog created with default constructor." << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	Animal::operator=(copy);
	*this->_brain = *copy._brain;
	std::cout << "Assignment operator for Dog called." << std::endl;
	return (*this);
}

std::string const	&Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::setType(const std::string &type)
{
	this->_type = type;
}

Brain &Dog::getBrain(void) const
{
	return (*this->_brain);
}

void	Dog::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal goes Bark!" << std::endl;
}
