#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	this->type = obj.getType();
	std::cout << "WrongCat copy constructor called" << std::endl;

}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.getType();
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Cat Sound." << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type;
}