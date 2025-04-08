#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog:public Animal
{
    private:
    std::string _type;
    public:
    Dog(void);
    Dog(std::string const &type);
    Dog(Dog const &copy);
    ~Dog(void);

    Dog const &operator=(Dog const &copy);
    void makeSound(void)const;
    void	setType(std::string const &type);
    std::string const	&getType(void) const;
};

#endif