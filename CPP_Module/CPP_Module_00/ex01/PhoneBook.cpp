#include "includes/PhoneBook.hpp"

void	PhoneBook::AddContact(void)
{
	contacts[last_idx % 8].AddContact();
	last_idx++;
}

void	PhoneBook::SearchContact(void)
{
	std::string	input;
	int			idx;

	PrintPhoneBook();
	std::cout << "what do you want > ";
	std::cin >> input;
	if (input.length() != 1 || !(input[0] >= '1' && input[0] <= '8'))
	{
		std::cout << "** idx is wrong **" << std::endl;
		return ;
	}
	idx = input[0] - '0' - 1;
	if (last_idx < 8 && idx >= last_idx)
	{
		std::cout << "** idx is wrong **" << std::endl;
		return ;
	}
	contacts[idx].PrintContact();
}

void	PhoneBook::PrintPhoneBook(void)
{
	int	i;

	if (last_idx == 0)
	{
		std::cout << "** phonebook is empty **" << std::endl;
		return ;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|       idx|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	i = 0;
	while (i < last_idx && i < 8)
	{
		std::cout << "|         " << i + 1<< "|";
		contacts[i].PrintFirstName();
		std::cout << "|";
		contacts[i].PrintLastName();
		std::cout << "|";
		contacts[i].PrintNickname();
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		i++;
	}
}