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
		Fixed(int num); // 정수 받기
		Fixed(float num); //소수 받기
		~Fixed(void);
		Fixed&	operator=(const Fixed& other);

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif