#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
class	Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone_num;
		std::string	secret;
	public:
		void		AddContact(void);
		void		PrintFirstName(void);
		void		PrintLastName(void);
		void		PrintNickname(void);
		void		PrintContact(void);
		void		GetPhoneNum(void);
};

#endif