#include "Fixed.hpp"

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_val;
}
void	Fixed::setRawBits(int const raw)
{
	fixed_val = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed	&Fixed::assignOperator(Fixed &original)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &original)
		fixed_val = original.getRawBits();
	return (*this);
}

Fixed::Fixed(void) : fixed_val(0), fractional_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}