#include "PhoneBook.hpp"

int	main()
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
		std::cout <<"command > ";
		std::cin >> cmd;
		if (std::cin.eof())
			return 0;

		if (cmd == "ADD" || cmd == "add")
		{
			if (book.AddContact() == -1)
				return 0;
		}

		else if (cmd == "SEARCH" || cmd == "search")
		{
			if (book.SearchContact() == -1)
				return 0;
		}

		else if (cmd == "EXIT" || cmd == "exit")
		{
			std::cout << "** Good Bye **" << std::endl;
			break ;
		}
		
		else
			std::cout << "** wrong command. please retry **" << std::endl;
	}
	return 0;
}
