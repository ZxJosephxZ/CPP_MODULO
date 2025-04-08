#include "Cat.hpp"

Cat::Cat(void): _type("cat")
{
    std::cout << "Cat from Animal " << Animal::_type << " created with default constructor." << std::endl;
}

Cat::Cat(std::string const &type): Animal(type), _type("cat")
{
    std::cout << "Cat from Animal " << Animal::_type << " created." << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
    *this = copy;
    std::cout << "Cat from Animal " << Animal::_type << " copied." << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat from Animal " << Animal::_type << " destroyed." << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignment operator for Cat from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setType(std::string const &type)
{
	this->_type = type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat From Animal " << Animal::_type << " goes Meow!" << std::endl;
}