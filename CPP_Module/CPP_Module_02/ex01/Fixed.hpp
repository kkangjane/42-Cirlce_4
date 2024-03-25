#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int		raw_bits;
		int		fractional_bits;
	public:
		Fixed(void);
		Fixed(const int raw);
		Fixed(const float raw);
		Fixed(const Fixed &obj);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		getFract(void) const;
		void	setFract(int const fract);
};

#endif