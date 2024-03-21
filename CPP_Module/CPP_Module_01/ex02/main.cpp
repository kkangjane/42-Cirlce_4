#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;	/* 포인터 */
	std::string	&stringREF = str;	/* 참조자 */

	std::cout << "string's address: " << &str << std::endl;
	std::cout << "stringPTR's address: " << stringPTR << std::endl;
	std::cout << "stringREF's address: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return 0;
}
