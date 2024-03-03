#include <iostream>

int	main(void)
{
	std::string hi_msg = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hi_msg;
	std::string	&stringREF = hi_msg;

	std::cout << "string's address: " << &hi_msg << std::endl;
	std::cout << "ptr's address: " << stringPTR << std::endl;
	std::cout << "ref's address: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "string: " << hi_msg << std::endl;
	std::cout << "ptr: " << *stringPTR << std::endl;
	std::cout << "ref: " << stringREF << std::endl;

	return 0;
}
