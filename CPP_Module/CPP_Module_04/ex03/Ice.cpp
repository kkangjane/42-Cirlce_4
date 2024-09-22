#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = obj;
}

Ice	&Ice::operator=(const Ice& obj)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice*	Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	Ice*	cloned = new Ice();
	return (cloned);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}