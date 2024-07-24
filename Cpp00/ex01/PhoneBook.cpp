/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:42:42 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/07 21:42:55 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

//Initialize the object's data members with default values
Contact::Contact()
	: firstName(""), lastName(""), nickname(""), phoneNo(""), darkestSecret("") {}

//Initialize the object's data members with provided values, e.g. in line 52
Contact::Contact(string firstName, string lastName, string nickname, string phoneNo, string darkestSecret)
	: firstName(firstName), lastName(lastName), nickname(nickname), phoneNo(phoneNo), darkestSecret(darkestSecret) {}

//Initialize contact count for tracking
PhoneBook::PhoneBook()
	: contactCount(0) {}

//Check for valid input
//Use getline() to include spaces
bool validField(string &input, string prompt) { 
	cout << GREEN << prompt << RESET << endl;
	getline(cin, input);
	if (input.empty()) {
		cout << RED << "Field cannot be empty, input " << CYAN << "EXIT" << RED << " and try again" << RESET << endl;
		return (false);
	}
	return (true);
}

//Add new Contact to PhoneBook
//cin.ignore to ignore the newline character left by previous cout
void PhoneBook::addContact() {
	string firstName, lastName, nickname, phoneNo, darkestSecret;

	if (contactCount >= 8) {
		cout << RED << "Phonebook is full" << RESET << endl;
		return ;
	}

	cin.ignore();
	if (!validField(firstName, "First name: ")) return ;
	if (!validField(lastName, "Last name: ")) return ;
	if (!validField(nickname, "Nickname: ")) return ;
	if (!validField(phoneNo, "Phone number: ")) return ;
	if (!validField(darkestSecret, "Darkest secret: ")) return ;
	
	contacts[contactCount++] = Contact(firstName, lastName, nickname, phoneNo, darkestSecret);
	cout << MAGENTA << "Contact added successfully!" << RESET << endl;
}

//Truncate if string > 10 characters
string formatString(string s) {
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

//Display all contacts
void PhoneBook::printContacts() {
	cout << " | " << setw(10) << "Index" << " | "
		<< setw(10) << "First Name" << " | "
		<< setw(10) << "Last Name" << " | "
		<< setw(10) << "Nickname" << " | " << endl;
	
	for (int i = 0; i < contactCount; ++i) {
		cout << " | " << setw(10) << i + 1 << " | "
			<< setw(10) << formatString(contacts[i].getFirst()) << " | "
			<< setw(10) << formatString(contacts[i].getLast()) << " | "
			<< setw(10) << formatString(contacts[i].getNick()) << " | " << endl;
	}
}

//Display selected contact
void PhoneBook::printSpecific(int index) {
	Contact &contact = contacts[index - 1];
	cout << CYAN << "First name: " << RESET << contact.getFirst()<< endl;
	cout << CYAN << "Last name: " << RESET << contact.getLast() << endl;
	cout << CYAN << "Nickname: " << RESET << contact.getNick()<< endl;
	cout << CYAN << "Phone number: " << RESET << contact.getPhoneNo() << endl;
	cout << CYAN << "Darkest secret: " << RESET << contact.getSecret() << endl;
}

void clPrompt() {
	cout << YELLOW << "Enter a command: " << RESET << endl;
	cout << CYAN << "< ADD >" << YELLOW << " to add a new contact" << RESET << endl;  
	cout << CYAN << "< SEARCH >" << YELLOW << " to find a contact" << RESET << endl;
	cout << CYAN << "< EXIT >" << YELLOW << " to exit program" << RESET << endl;
}

//Infinate loop until user inputs "EXIT"
int main()
{
	string input;
	PhoneBook myPhoneBook;
	myPhoneBook.contactCount = 0;

	clPrompt();

	while (1) {
		cin >> input;

		if (input != "ADD" && input != "add" && input != "SEARCH" && input !=  "search" && input != "EXIT" && input != "exit") {
			cout << RED << "Invalid command" << endl;
			clPrompt();
		}
		else {
			if (input == "EXIT" || input == "exit")
				break;
			else if (input == "ADD" || input == "add")
				myPhoneBook.addContact();
			else {
				myPhoneBook.printContacts();
				if (myPhoneBook.contactCount > 0) {
					int index;
					cout << YELLOW << "Enter the index of the contact you want displayed: " << RESET;
					cin >> index;
					if (index < 1 || index > myPhoneBook.contactCount) {
						cout << RED << "Invalid index, program terminating" << RESET << endl;
						return (1);
					}
					myPhoneBook.printSpecific(index);
				}
				else 
					cout << RED << "No contacts to display" << RESET << endl;
			}
		}
	}

	return (0);
}

//Getters

string Contact::getFirst() const { return firstName; }
string Contact::getLast() const { return lastName; }
string Contact::getNick() const { return nickname; }
string Contact::getPhoneNo() const { return phoneNo; }
string Contact::getSecret() const { return darkestSecret; }