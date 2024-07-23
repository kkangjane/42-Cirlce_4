#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int 				raw_bits; // 정수부
		const static int	fractional_bits = 8; //소수부
	public:
		Fixed(void); //기본 생성자
		Fixed(const Fixed &obj); // 복사 생성자
		~Fixed(void); // 소멸자
		Fixed& operator=(const Fixed& other); // 오버로딩
		
		int getRawBits(void) const; // 정수 얻기
		void setRawBits(int const raw); // 정수 설정하기
};

#endif