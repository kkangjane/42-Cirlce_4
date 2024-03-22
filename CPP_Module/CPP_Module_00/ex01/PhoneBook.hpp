#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		last_idx;
	public:
		PhoneBook();
		int		AddContact(void);
		int		SearchContact(void);
		void	PrintPhoneBook(void);
};

#endif