#include "includes/PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	book;

	std::cout << "+++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "+                                         +" << std::endl;
	std::cout << "+     Welcome to jae-kang's PhoneBook!    +" << std::endl;
	std::cout << "+ You can use command (ADD, SEARCH, EXIT) +" << std::endl;
	std::cout << "+                                         +" << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++" << std::endl << std::endl;
	while (1)
	{
		std::cout <<"command> ";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.AddContact();
		else if (cmd == "SEARCH")
			book.SearchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "** wrong command. please retry **" << std::endl;
	}
	return (0);
}
