#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal
{
    private:
    Brain *_brain;
    public:
    Dog(void);
    Dog(Dog const &copy);
    ~Dog(void);

    Dog const &operator=(Dog const &copy);
    void makeSound(void)const;
    std::string const	&getType(void) const;
    Brain 				&getBrain(void) const;
    void				setType(std::string const &type);
    void				setBrain(Brain const &brain);

    /* Main Member Functions */
    void	makeSound(void) const;
};

#endif