#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int		fixed_val;
	int		fractional_bits;
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&assignOperator(Fixed &original);
};

#endif