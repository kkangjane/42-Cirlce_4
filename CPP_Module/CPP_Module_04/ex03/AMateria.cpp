#include "AMateria.hpp"

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
		return ;
	this->type = obj.getType();
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

const std::string	&AMAteria::getType() const
{
	return this->type;
}