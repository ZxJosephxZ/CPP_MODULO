#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitpoints(100), _energy_points(100), _attack_damage(30)
{
    std::cout <<"ClapTrap " << this->_name << " created with a default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitpoints(100), _energy_points(100), _attack_damage(30)
{
    std::cout <<"ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "ClapTrap " << this->_name << "copied "<< std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << "Destroyed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points && this->_energy_points > 0)
    {
        std::cout << "ClapTrap " <<this->_name << " attack " << target << "causing " << this->_attack_damage << std::endl;
        this->_energy_points--;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "ClapTrap " <<this->_name << "is dead"<< std::endl;
    }
    else if (!this->_energy_points)
    {
        std::cout << "ClapTrap " << this->_name << " out of energy points"<< std::endl;        
    }
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints > 0)
    {
        std::cout << "ClapTrap " <<this->_name << "take " << amount << "damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else
    {
        std::cout << "ClapTrap " <<this->_name << "is dead"<< std::endl;
    }
    if (this->_hitpoints < 0)
        this->_hitpoints = 0;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints > 0 && this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
		this->_hitpoints += amount;
		this->_energy_points--;
	}
	if (this->_hitpoints <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    std::cout <<"Assignment operator for ClapTrap called." << std::endl;
    this->_name = copy.get_name();
    this->_hitpoints = copy.get_hitPoint();
    this->_energy_points = copy.get_energy_points();
    this->_attack_damage = copy.get_damage();
    return (*this);
}

std::string const &ClapTrap::get_name(void) const
{
    return (this->_name);
}

void ClapTrap::set_name(std::string const &name)
{
    this->_name = name;
}

int const &ClapTrap::get_hitPoint(void) const
{
    return (this->_hitpoints);
}

void ClapTrap::set_hitPoint(int const &value)
{
    this->_hitpoints = value;
}

int const &ClapTrap::get_energy_points(void) const
{
    return (this->_energy_points);
}

void ClapTrap::set_energy_points(int const &value)
{
    this->_energy_points = value;
}

int const &ClapTrap::get_damage(void) const
{
    return this->_attack_damage;
}

void ClapTrap::set_damage(int const &damage)
{
    this->_attack_damage = damage;
}