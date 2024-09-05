#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &obj)
{
	this->setRawBits(obj.getRawBits());
}

Fixed::Fixed(int num)
{
	this->setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(float num)
{
	this->setRawBits(roundf(num * (1 << this->fractional_bits)));
}

Fixed::~Fixed(void)
{
	return ;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	return os << fixed.toFloat();
}

int	Fixed::getRawBits(void) const
{
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

Fixed& Fixed::operator=(const Fixed& obj)
{
	this->setRawBits(obj.getRawBits());
	return *this;
}

/* 비교 연산자 */
bool    Fixed::operator==(const Fixed& obj)
{
    return (this->getRawBits() == obj.getRawBits());
}

bool    Fixed::operator!=(const Fixed& obj)
{
    return (this->getRawBits() != obj.getRawBits());
}

bool    Fixed::operator<=(const Fixed& obj)
{
    return (this->getRawBits() <= obj.getRawBits());
}

bool    Fixed::operator>=(const Fixed& obj)
{
    return (this->getRawBits() >= obj.getRawBits());
}

bool    Fixed::operator<(const Fixed& obj)
{
    return (this->getRawBits() < obj.getRawBits());
}

bool    Fixed::operator>(const Fixed& obj)
{
	return (this->getRawBits() > obj.getRawBits());
}

/* 산술 연산자 */
Fixed   Fixed::operator+(const Fixed& obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed   Fixed::operator-(const Fixed& obj)
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed   Fixed::operator*(const Fixed& obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed   Fixed::operator/(const Fixed& obj)
{
    return Fixed(this->toFloat() / obj.toFloat());
}

/* 증감 연산자 */
Fixed&  Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed&  Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed   Fixed::operator++(int)
{
	const Fixed	temp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

Fixed   Fixed::operator--(int)
{
	const Fixed	temp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return temp;
}


/* min, max */
const Fixed	&Fixed::min(Fixed const &copy1, Fixed const &copy2)
{
	return (copy1.getRawBits() <= copy2.getRawBits()) ? copy1 : copy2;
}

const Fixed	&Fixed::max(Fixed const &copy1, Fixed const &copy2)
{
	return (copy1.getRawBits() >= copy2.getRawBits()) ? copy1 : copy2;
}

const Fixed	&Fixed::min(Fixed &copy1, Fixed &copy2)
{
	return (copy1.getRawBits() <= copy2.getRawBits()) ? copy1 : copy2;
}

const Fixed	&Fixed::max(Fixed &copy1, Fixed &copy2)
{
	return (copy1.getRawBits() >= copy2.getRawBits()) ? copy1 : copy2;
}