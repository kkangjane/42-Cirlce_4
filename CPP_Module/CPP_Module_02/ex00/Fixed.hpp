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
		~Fixed(void);
		Fixed& operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif