#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}
MateriaSource&	MateriaSource::operator=(const MateriaSource &obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < 4; ++i)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	if (m)
		delete m;
	m = 0;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && type == this->inventory[i]->getType())
			return this->inventory[i]->clone();
	}
	return 0;
}