#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = obj.getType();
	this->brain = new Brain(*obj.brain);
}

Cat&	Cat::operator=(const Cat &obj)
{
	std::cout << "cat copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow~" << std::endl;
}

std::string	Cat::getType() const
{
	delete this->brain;
	return this->type;
}