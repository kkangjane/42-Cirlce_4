#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->raw_bits = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw_bits = obj.getRawBits();
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = num << this->fractional_bits;
}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_bits = roundf(num * (1 << this->fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* 더 공부! */
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw_bits = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw_bits;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}


float	Fixed::toFloat(void) const
{
	return ((float)this->raw_bits / (1 << this->fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->raw_bits >> this->fractional_bits);
}