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

# define RESET		"\033[0m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define MAGENTA	"\033[1;35m"
# define CYAN		"\033[1;36m"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::setw;
//using std::right;

class Contact {
	public:
		string firstName;
		string lastName;
		string nickname;
		string phoneNo;
		string darkestSecret;

		Contact();
		Contact(string firstName, string lastName, string nickname, string phoneNo, string darkestSecret);
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