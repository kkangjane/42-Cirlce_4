#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(obj.getRawBits());
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << this->fractional_bits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	return os << fixed.toFloat();
}

int	Fixed::getRawBits(void) const
{
	return this->fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (1 << this->fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point >> this->fractional_bits);
}

/* 비교 연산자 == != <= >= < > */
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

/* 산술 연산자 + - * \ */
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
// 전위는 인자를 void로 설정 ++a --a
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

// 후위는 인자를 int로 설정 a++ a--
const Fixed   Fixed::operator++(int)
{
	const Fixed	temp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

const Fixed   Fixed::operator--(int)
{
	const Fixed	temp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return temp;
}


/* min, max */
const Fixed	&Fixed::min(Fixed const &copy1, Fixed const &copy2)
{
	if (copy1.getRawBits() <= copy2.getRawBits())
		return copy1;
	else
		return copy2;
}

const Fixed	&Fixed::max(Fixed const &copy1, Fixed const &copy2)
{
	if (copy1.getRawBits() >= copy2.getRawBits())
		return copy1;
	else
		return copy2;
}

const Fixed	&Fixed::min(Fixed &copy1, Fixed &copy2)
{
	if (copy1.getRawBits() <= copy2.getRawBits())
		return copy1;
	else
		return copy2;
}

const Fixed	&Fixed::max(Fixed &copy1, Fixed &copy2)
{
	if (copy1.getRawBits() >= copy2.getRawBits())
		return copy1;
	else
		return copy2;
}