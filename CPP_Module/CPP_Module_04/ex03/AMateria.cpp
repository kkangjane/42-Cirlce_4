#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	this->type = obj.getType();
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	std::cout << "AMateria Copy assignment constructor called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	std::cout << "AMateria getType called" << std::endl;
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* use a " << getType() << " at " << target.getName();
}