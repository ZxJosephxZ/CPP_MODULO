#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitpoints;
        int         _energy_points;
        int         _attack_damage; 
    public:
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &copy);
        ~ClapTrap(void);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap &operator=(ClapTrap const &copy);
        std::string const	&get_name(void) const;
		int const			&get_hitPoint(void) const;
		int const			&get_energy_points(void) const;
		int const			&get_damage(void) const;
		void				set_name(std::string const &name);
		void				set_hitPoint(int const &value);
		void				set_energy_points(int const &value);
		void				set_damage(int const &value);
};
#endif