#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		last_idx;
	public:
		void	AddContact(void);
		void	SearchContact(void);
		void	PrintPhoneBook(void);
};

#endif