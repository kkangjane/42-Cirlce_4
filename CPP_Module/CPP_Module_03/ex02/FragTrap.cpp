#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
	this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (this->Hit_point == 0)
        return ;

    std::cout << "FragTrap " + this->name + "highFives!" << std::endl;
}