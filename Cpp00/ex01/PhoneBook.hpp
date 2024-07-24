/* ************************************************************************** */
/*			                                                                */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:42:40 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/07 21:48:22 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdbool.h>

//Text formatting
# define RESET		"\033[0m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define MAGENTA	"\033[1;35m"
# define CYAN		"\033[1;36m"

//Alternative to `using namespace` for cleaner syntax
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::setw;

//Class definitions
class Contact {
	private:
		string firstName;
		string lastName;
		string nickname;
		string phoneNo;
		string darkestSecret;

	public:
		Contact();
		Contact(string firstName, string lastName, string nickname, string phoneNo, string darkestSecret);

		string getFirst() const;
		string getLast() const;
		string getNick() const;
		string getPhoneNo() const;
		string getSecret() const;
};

class PhoneBook {
	public:
		Contact contacts[8];
		int contactCount;

		PhoneBook();

		void addContact(void);
		void printContacts(void);
		void printSpecific(int index);
};

#endif