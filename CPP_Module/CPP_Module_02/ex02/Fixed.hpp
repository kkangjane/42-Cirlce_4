#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int 				fixed_point;
		static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed&  operator=(const Fixed& obj);

        /* 비교 연산자 */
        bool			operator==(const Fixed& obj);
        bool			operator!=(const Fixed& obj);
        bool			operator<=(const Fixed& obj);
        bool			operator>=(const Fixed& obj);
        bool			operator<(const Fixed& obj);
        bool			operator>(const Fixed& obj);

        /* 산술연산자 */
        Fixed   		operator+(const Fixed& obj);
        Fixed   		operator-(const Fixed& obj);
        Fixed   		operator*(const Fixed& obj);
        Fixed   		operator/(const Fixed& obj);

        /* 증감연산자 */
        Fixed&			operator++(void);
        Fixed&		  	operator--(void);
        const Fixed		operator++(int);
        const Fixed   	operator--(int);

        static const Fixed  &min(Fixed const &copy1, Fixed const &copy2);
        static const Fixed  &max(Fixed const &copy1, Fixed const &copy2);
        static const Fixed  &min(Fixed &copy1, Fixed &copy2);
        static const Fixed  &max(Fixed &copy1, Fixed &copy2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif