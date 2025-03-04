#include "Contact.hpp"

void Contact::setInfo() {
	std::cout << "Name: ";
	std::getline(std::cin, first_name);
	std::cout << "Surname: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Secret: ";
	std::getline(std::cin, darkest_secret);
}

bool Contact::isEmpty() const {
	return first_name.empty();
}

void Contact::displayInfo() const {
	std::cout << "Name: " << first_name << std::endl;
	std::cout << "Surname: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Number: " << phone_number << std::endl;
	std::cout << "Secret: " << darkest_secret << std::endl;
}

void Contact::displaySummary(int index) const {
	std::string fname = first_name;
	std::string lname = last_name;
	std::string nname = nickname;
	if (fname.length() > 10)
		fname = fname.substr(0, 9) + ".";
	if (lname.length() > 10)
		lname = lname.substr(0, 9) + ".";
	if (nname.length() > 10)
		nname = nname.substr(0, 9) + ".";
	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << fname << "|";
	std::cout << std::setw(10) << lname << "|";
	std::cout << std::setw(10) << nname << "|" << std::endl;
}
