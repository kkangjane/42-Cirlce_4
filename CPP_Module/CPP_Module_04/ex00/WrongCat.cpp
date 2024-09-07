#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "animal";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	this->type = obj.getType();
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Animal Sound." << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type;
}