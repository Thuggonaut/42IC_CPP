/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:24 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 15:53:59 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain; //Pointer to string and stores the address of brain
	string &stringREF = brain; //Reference to string, provides value of brain

	cout << "Address of brain: " << &brain << endl;
	cout << "Address of stringPTR: " << stringPTR << endl;
	cout << "Address of stringREF: " << &stringREF << endl;
	cout << "Value of brain: " << brain << endl;
    cout << "Value of stringPTR: " << *stringPTR << endl;
    cout << "Value of stringREF: " << stringREF << endl;

	return (0);
}