#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = obj.getType();
}

Cat&	Cat::operator=(const Cat &obj)
{
	std::cout << "Cat= called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow~" << std::endl;
}

std::string	Cat::getType() const
{
	return this->type;
}