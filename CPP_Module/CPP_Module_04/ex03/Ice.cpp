#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	this->type = obj.getType();
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	std::cout << "Ice copy assignment constructor called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice*		Ice::clone() const
{
	Ice	*clone = new Ice();
	return clone;	
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoorts an ice bolt at " << target.getName() << " *" << std::endl;
}