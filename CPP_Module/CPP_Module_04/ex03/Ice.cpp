#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
	*this = obj;
}

Ice	&Ice::operator=(const Ice& obj)
{
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	Ice*	cloned = new Ice();
	return (cloned);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}