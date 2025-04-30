#include "Contact.hpp"

void Contact::setInfo() {
	std::cout << "Name: ";
	std::getline(std::cin, first_name);
	if(first_name.empty()) {
		std::cout << "first_name can not be empty retry ;)" << std::endl;
		return;
	}
	std::cout << "Surname: ";
	std::getline(std::cin, last_name);
	if(last_name.empty()) {
		std::cout << "last_name can not be empty retry ;)" << std::endl;
		return;
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	if(nickname.empty()) {
		std::cout << "nickname can not be empty retry ;)" << std::endl;
		return;
	}
	std::cout << "Number: ";
	std::getline(std::cin, phone_number);
	if(phone_number.empty()) {
		std::cout << "phone_number can not be empty retry ;)" << std::endl;
		return;
	}
	if(check_number(phone_number) == false) {
		std::cout << "phone_number is not a number retry ;)" << std::endl;
		return;
	}
	std::cout << "Secret: ";
	std::getline(std::cin, darkest_secret);
	if(darkest_secret.empty()) {
		std::cout << "darkest_secret can not be empty retry ;)" << std::endl;
		return;
	}
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

bool Contact::check_number(std::string number)	{
	for(int i = 0; number[i]; i++)
		if(number[i] < 48 || number[i] > 57)
			return false;
	return true;
}
