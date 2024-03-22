#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class	Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone_num;
		std::string	secret;
	public:
		int			AddContact(void);
		void		PrintFirstName(void);
		void		PrintLastName(void);
		void		PrintNickName(void);
		void		PrintContact();
};

#endif