#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = obj.inventory[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "MateriaSource copy assignment constructor called" << std::endl;
	if (this == &obj)
		return *this;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete inventory[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = -1;
	while (++i < 4)
		if (this->inventory[i] == 0)
			break ;
	if (i >= 4)
		std::cout << "inventory is full" << std::endl;
	else
	{
		this->inventory[i] = m;
		std::cout << "Materia learned " << m->getType() << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = -1;

	while (++i < 4)
		if (this->inventory[i] != 0 && this->inventory[i]->getType() == type)
			break ;
	if (i < 4 && this->inventory[i]->getType() == type)
		return this->inventory[i]->clone();
	else
		return NULL;
}