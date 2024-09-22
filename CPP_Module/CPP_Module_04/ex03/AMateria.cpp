#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& obj)
{
	this->type = obj.getType();
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* use a " << getType() << " at " << target.getName();
}