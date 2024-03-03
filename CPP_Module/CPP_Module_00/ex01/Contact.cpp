#include "includes/Contact.hpp"

void	Contact::AddContact(void)
{
	std::cout << "first name: ";
	std::cin >> f_name;
	std::cout << "last name: ";
	std::cin >> l_name;
	std::cout << "nickname: ";
	std::cin >> n_name;
	GetPhoneNum();
	std::cout << "darkest secret: ";
	std::cin >> secret;
}

void	Contact::PrintFirstName(void)
{
	if (f_name.length() <= 10)
		std::cout << std::setw(10) << f_name;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << f_name[i];
		std::cout << ".";
	}
}

void	Contact::PrintLastName(void)
{
	if (l_name.length() <= 10)
		std::cout << std::setw(10) << l_name;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << l_name[i];
		std::cout << ".";
	}
}

void	Contact::PrintNickname(void)
{
	if (n_name.length() <= 10)
		std::cout << std::setw(10) << n_name;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << n_name[i];
		std::cout << ".";
	}
}

void	Contact::PrintContact(void)
{
	std::cout << "first name: " << f_name << std::endl;
	std::cout << "last name: " << l_name << std::endl;
	std::cout << "nickname: " << n_name << std::endl;
	std::cout << "phone number: " << phone_num << std::endl;
	std::cout << "darkest secret: " << secret << std::endl << std::endl;
}

void	Contact::GetPhoneNum(void)
{
	int			cnt;
	int			i;
	std::string	str;

	cnt = 0;
	while (1)
	{
		if (cnt == 5)
		{
			std::cout << "** are you kidding me? again **" << std::endl;
			exit(0);
		}
		std::cout << "phone number: ";
		std::cin >> str;
		i = -1;
		while (str[++i])
			if (isdigit(str[i]) == 0)
				break ;
		phone_num[i] = 0;
		if (str[i] != 0)
			std::cout << "** try again **" << std::endl;
		else
		{
			phone_num = str;
			return ;
		}
		cnt++;
	}
}
