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
		Fixed&	operator=(const Fixed& obj);

		int 	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif