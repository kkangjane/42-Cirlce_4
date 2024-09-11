#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	this->name = obj.name;
	this->Hit_point = obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;

	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hit_point == 0 || this->Energy_point == 0)
		return ;

	std::cout << "ClapTrap " << this->name + " attacks " + target + ", causing " << this->Attack_damage << " of damage!" << std::endl;
	this->Energy_point -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_point == 0)
		return;
	
	else
	{
		std::cout << "ClapTrap " << this->name + " is attacked by damage " << amount << std::endl;
		
		if (this->Hit_point > amount)
		{
			this->Hit_point -= amount;
			std::cout << "-> " + this->name + "\'s now Hit_point: " << this->Hit_point << std::endl;
		}
		else
		{
			this->Hit_point = 0;
			std::cout << "-> " + this->name + " died" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_point == 0 || this->Energy_point == 0)
		return;

	this->Energy_point -= 1;
	this->Hit_point += amount;
	std::cout << "ClapTrap " + this->name + "is repaired of " << amount << "Hit Points" << std::endl;
	std::cout << "-> " + this->name + "\'s now Hit_point: " << this->Hit_point << std::endl;
	std::cout << "-> " + this->name + "\'s now Energy_point: " << this->Energy_point << std::endl;
}