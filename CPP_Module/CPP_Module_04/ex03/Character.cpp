#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(std::string name)
{
	std::cout << "Character(" << name << ") constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character &obj)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
}

Character	&Character::operator=(const Character &obj)
{
	std::cout << "Character copy assignment constructor called" << std::endl;
	if (this == &obj)
		return *this;
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

std::string	const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	int	i = -1;
	while (++i < 4)
		if (this->inventory[i] == 0)
			break ;
	if (i < 4)
		this->inventory[i] = m;
	else
		std::cout << "Inventory is full" << std::endl;

}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4 || this->inventory[idx] == 0)
		return ;
	std::cout << this->getName();
	this->inventory[idx]->use(target);
}

AMateria	*Character::getMeteriaFromInventory(int idx)
{
	if (idx < 0 || idx > 4)
		return 0;
	
	if (this->inventory[idx] != 0)
		return this->inventory[idx];
	return 0;
}