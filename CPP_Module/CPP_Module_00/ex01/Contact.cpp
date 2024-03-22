#include "Contact.hpp"

static int	check_phone_num(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (isdigit(str[i]) == 0)
			break ;
	if (str[i])
		return -1;
	else
		return 0;
}

int	Contact::AddContact()
{
	std::string	temp;

	std::cout << "First name : ";
	std::cin >> this->f_name;
	if (std::cin.eof())
		return -1;
	
	std::cout << "Last name : ";
	std::cin >> this->l_name;
	if (std::cin.eof())
		return -1;
	
	std::cout << "Nickname : ";
	std::cin >> this->n_name;
	if (std::cin.eof())
		return -1;

	while (true)
	{
		std::cout << "Phone number : ";
		std::cin >> this->phone_num;
		if (std::cin.eof())
		return -1;
		if (!check_phone_num(this->phone_num))
			break ;
		std::cout << "** phone number is wrong. retry **" << std::endl;
	}
	
	std::cout << "Darkest secret : ";
	std::cin >> this->secret;
	if (std::cin.eof())
		return -1;
	return 0;
}

void	Contact::PrintFirstName(void)
{
	if (this->f_name.length() <= 10)
		std::cout << std::setw(10) << this->f_name;
	else
		std::cout << f_name.substr(0, 9) << ".";
	std::cout << "|";
}

void	Contact::PrintLastName(void)
{
	if (this->l_name.length() <= 10)
		std::cout << std::setw(10) << this->l_name;
	else
		std::cout << l_name.substr(0, 9) << ".";
	std::cout << "|";
}

void	Contact::PrintNickName(void)
{
	if (this->n_name.length() <= 10)
		std::cout << std::setw(10) << this->n_name;
	else
		std::cout << n_name.substr(0, 9) << ".";
	std::cout << "|";
}

void	Contact::PrintContact(void)
{
	std::cout << "First name: " << f_name << std::endl;
	std::cout << "Last name: " << l_name << std::endl;
	std::cout << "Nick name: " << n_name << std::endl;
	std::cout << "Phone number: " << phone_num << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}