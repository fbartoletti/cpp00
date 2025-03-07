#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
public:
	void setInfo();
	bool isEmpty() const;
	void displayInfo() const;
	void displaySummary(int index) const;
};

#endif
