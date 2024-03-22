#include "PhoneBook.hpp"

static int	atoidx(std::string num);

PhoneBook::PhoneBook() : last_idx(-1)
{
}

int	PhoneBook::AddContact(void)
{
	last_idx++;
	if (this->contacts[last_idx % 8].AddContact() == -1)
		return -1;
	return 0;
}

int	PhoneBook::SearchContact(void)
{
	std::string str;
	int			idx;

	if (last_idx == -1)
	{
		std::cout << "** phonebook is empty ** " << std::endl;
		return 0;
	}
	PrintPhoneBook();

	while (true)
	{
		std::cout << "index > ";
		std::cin >> str;
		if (std::cin.eof())
			return -1;
		idx = atoidx(str);
		if (idx <= last_idx && idx >= 0 && idx < 8)
			break ;
		std::cout << "** index is wrong. retry **" << std::endl;
	}
	this->contacts[idx].PrintContact();
	return 0;
}

void	PhoneBook::PrintPhoneBook(void)
{
	int	idx = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|       idx|first name| last name| nick name|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (idx < 8 && idx <= last_idx)
	{
		std::cout << "|         " << idx + 1 << "|";
		this->contacts[idx].PrintFirstName();
		this->contacts[idx].PrintLastName();
		this->contacts[idx].PrintNickName();
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		idx++;
	}
}

static int	atoidx(std::string num)
{
	int		idx;

	if (num.size() != 1)
		return -1;
	if (num[0] < '1' | num[0] > '9')
		return -1;
	idx = num[0] - '0' - 1;
	return idx;
}