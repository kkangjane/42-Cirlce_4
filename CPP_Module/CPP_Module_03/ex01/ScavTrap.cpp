#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj)
{
    this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " + this->name + " destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->Hit_point == 0) // Energy_ponit는 맞을 때 닳지 않으므로 고려하지 않음.
        return ;
    std::cout << "ScavTrap " + this->name + "is now in Gate Kepper mode" << std::endl; 
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->Hit_point == 0 || this->Energy_point == 0)
		return ;
	std::cout << "ScavTrap " << this->name + " attacks " + target + ", causing " << this->Attack_damage << " of damage!" << std::endl;
	this->Energy_point -= 1;
}