#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Default constructor called" << std::endl;
	return;
};

PhoneBook::~PhoneBook(void) {
	std::cout << "Default destructor called" << std::endl;
	return;
};

int	main()
{
	PhoneBook instance;

	return (0);
}