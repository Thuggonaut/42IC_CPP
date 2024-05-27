#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>

class Contact {
	private:
		std::string darkestSecret;

	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNo;

	Contact() {
		this->firstName = "";
        this->lastName = "";
        this->nickname = "";
        this->phoneNo = "";
        this->darkestSecret = "";
	}

	Contact(std::string fn, std::string ls, std::string nn, std::string ph, std::string ds) {
		this->firstName = fn;
		this->lastName = ls;
		this->nickname = nn;
		this->phoneNo = ph;
		this->darkestSecret = ds;
	}

	void printContacts();

	void printSpecific();
};

class PhoneBook {
	public:
		Contact contacts[8];
	    
		PhoneBook() {
			for (int i = 0; i < 8; i++) {
                this->contacts[i] = Contact();
            }
		}

		void addContact(Contact contact);

		void cleanExit(); //todo destructor? under contact class?
};

#endif