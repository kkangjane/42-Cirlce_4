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

Fixed::Fixed(int num)
{ // 정수를 고정소수로 만든다.
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(float num)
{ // 부동소수를 받아서 고정소수로 바꾼다.
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << this->fractional_bits)));
	// 256을 곱하고 이의 반올림 값을 저장하면서 더 근사치가 되도록 만든다.
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	return os << fixed.toFloat();
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
{	// 고정소수를 부동소수로 리턴한다.
	// ex. raw_bits=10860일 때(42.4219) 8비트 고정인 256으로 나누면 소수로 표현할 수 있다.
	return ((float)this->raw_bits / (1 << this->fractional_bits));
}

int		Fixed::toInt(void) const
{	// 고정소수를 정수로 리턴한다.
	// 그냥 8비트만 옆으로 옮기면 정수값만을 나타낸다.
	return (this->raw_bits >> this->fractional_bits);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return *this;
}

/* 비교 연산자 */
bool    Fixed::operator==(const Fixed& other)
{
    return (this->fixed)
}
bool    Fixed::operator!=(const Fixed& other);
bool    Fixed::operator<=(const Fixed& other);
bool    Fixed::operator>=(const Fixed& other);
bool    Fixed::operator<(const Fixed& other);
bool    Fixed::operator>(const Fixed& other);

/* 산술연산자 */
Fixed   Fixed::operator+(const Fixed& other)
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed   Fixed::operator-(const Fixed& other)
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed   Fixed::operator*(const Fixed& other)
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed   Fixed::operator/(const Fixed& other)
{
    return Fixed(this->toFloat() / other.toFloat());
}

// Fixed&  Fixed::operator++(void);
// Fixed&  Fixed::operator--(void);
// Fixed   Fixed::operator++(int value);
// Fixed   Fixed::operator--(int value);