#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int 				raw_bits;
		const static int	fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(int num);
		Fixed(float num);
		~Fixed(void);

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed&  operator=(const Fixed& other);

        /* 비교 연산자 */
        bool    operator==(const Fixed& other);
        bool    operator!=(const Fixed& other);
        bool    operator<=(const Fixed& other);
        bool    operator>=(const Fixed& other);
        bool    operator<(const Fixed& other);
        bool    operator>(const Fixed& other);

        /* 산술연산자 */
        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);

        /* 증감연산자 */
        Fixed&  operator++(void);
        Fixed&  operator--(void);
        Fixed   operator++(int);
        Fixed   operator--(int);

        static const Fixed  &min(Fixed const &copy1, Fixed const &copy2);
        static const Fixed  &max(Fixed const &copy1, Fixed const &copy2);
        static const Fixed  &min(Fixed &copy1, Fixed &copy2);
        static const Fixed  &max(Fixed &copy1, Fixed &copy2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif