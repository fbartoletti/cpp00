#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

void PhoneBook::addContact() {
	contacts[index % 8].setInfo();
	index++;
}

void PhoneBook::searchContact() const {
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++) {
		if (!contacts[i].isEmpty())
			contacts[i].displaySummary(i);
	}
	std::string input;
	int contactIndex;	
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	std::istringstream iss(input);
	if (!(iss >> contactIndex) || iss.peek() != EOF) {
		std::cout << "Invalid input!" << std::endl;
	} else if (contactIndex >= 0 && contactIndex < 8 && !contacts[contactIndex].isEmpty()) {
		contacts[contactIndex].displayInfo();
	} else {
		std::cout << "Invalid index!" << std::endl;
	}
}
