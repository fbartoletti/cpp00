#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>
#include <cstdio>

class PhoneBook {
private:
	Contact contacts[8];
	int index;

public:
	PhoneBook();
	void addContact();
	void searchContact() const;
};
	
#endif
