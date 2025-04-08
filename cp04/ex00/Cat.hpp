#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat:public Animal
{
    private:
    std::string _type;
    public:
    Cat(void);
    Cat(Cat const &copy);
    Cat(std::string const &type);
    ~Cat(void);

    void makeSound(void)const;
    Cat const &operator=(Cat const &copy);
    void	setType(std::string const &type);
    std::string const	&getType(void) const;
};

#endif CAT_HPP