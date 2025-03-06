#include "PhoneBook.hpp"

int main() {
	PhoneBook phonebook;
	std::string command;
	
	std::cout << "Welcome to PhoneBook!" << std::endl;
	
	while(true) {
		std::cout << "Command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command) || command.empty()) {
			std::cout << "\nEOF detected or empty input. Exiting program." << std::endl;
			break;
		}
		if(command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	
	std::cout << "Goodbye!" << std::endl;
	return 0;
}
