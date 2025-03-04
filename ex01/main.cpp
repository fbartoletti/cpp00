#include "PhoneBook.hpp"

int main() {
	PhoneBook phonebook;
	std::string command;
	
	std::cout << "Welcome to PhoneBook!" << std::endl;
	
	while(true) {
		std::cout << "Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		
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
