#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "";
	std::cout << "AMateria Default constructor called" << std::endl;
}


AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	this->type = obj.getType();
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	std::cout << "AMateria copy assignment constructor called" << std::endl;
	if (this == &obj)
		return *this;
	this->type = obj.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string	const	&AMateria::getType() const
{
	return this->type;
}

AMateria	*AMateria::clone() const
{
	AMateria	*clone = new AMateria();
	return clone;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "use a " << this->getType() << "at " << target.getName();
}