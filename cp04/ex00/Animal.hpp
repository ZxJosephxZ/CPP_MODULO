#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
    protected:
    std::string _type;
    public:
    Animal(void);
    Animal(std::string const &type);
    Animal(std::string const &copy);
    virtual ~Animal(void);

    std::string const &getType(void) const;
    void setType(std::string const &type);

    virtual void makeSound(void)const;
};
#endif