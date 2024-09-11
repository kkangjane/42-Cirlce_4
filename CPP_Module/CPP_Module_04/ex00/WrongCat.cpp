# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = obj.getType();
}

WrongCat&	WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat= called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "wrong cat !" << std::endl;
}