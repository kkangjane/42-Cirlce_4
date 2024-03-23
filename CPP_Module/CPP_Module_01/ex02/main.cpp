#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string's address: " << &str << std::endl;
	std::cout << "stringPTR's address: " << stringPTR << std::endl;
	std::cout << "stringREF's address: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	// stringREF = 0;
	// stringPTR = 0;
	return 0;
}
