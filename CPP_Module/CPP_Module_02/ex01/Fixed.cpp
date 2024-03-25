#include "Fixed.hpp"

Fixed::Fixed(void) : raw_bits(0), fractional_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->raw_bits = raw;
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->raw_bits = raw;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw_bits = obj.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw_bits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Assignation operation called" << std::endl;
	this->raw_bits = raw;
}

int	Fixed::getFract(void) const
{
	std::cout << "getFract member function called" << std::endl;
	return this->fractional_bits;
}

void	Fixed::setFract(int const fract)
{
	std::cout << "Assignation operation called" << std::endl;
	this->fractional_bits = fract;
}