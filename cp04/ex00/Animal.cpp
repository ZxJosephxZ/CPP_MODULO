#include "Animal.hpp"

Animal::Animal(void): _type("undefined")
{
    std::cout<< "se creo un animal" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
    std::cout<< "se creo el animal de tipo " << this->_type << std::endl;
}

Animal::Animal(Animal const &copy)
{
    std::cout<< "se ha realizado una copia" << this->_type << std::endl;
    *this = copy;
}

std::string const &Animal::getType(void) const
{
    std::cout<< "El tipo de dato es " << this->_type << std::endl;
    return (this->_type);
}

void Animal::setType(std::string const &type)
{
    std::cout<< "Se asigno el tipo " << type << std::endl;
    this->_type = type;
}

Animal::~Animal(void)
{
    std::cout<< "se destruyo el animal" << std::endl;
}

