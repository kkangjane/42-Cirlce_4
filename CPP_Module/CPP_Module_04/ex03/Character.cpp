#include "Character.hpp"

Character::Character()
{
	this->name = "default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const std::string &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(const Character &obj)
{
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	std::cout << "Character Copy Constructor called" << std::endl;
}

Character&	Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		name = obj.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			if (obj.inventory[i])
				this->inventory[i] = obj.inventory[i]->clone();
			else
				this->inventory[i] = 0;
		}
	}
	std::cout << "Character Copy assignment constructor called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];

	std::cout << "Character Destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0 || this->inventory[idx] == 0)
		return ;

	delete this->inventory[idx];
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
