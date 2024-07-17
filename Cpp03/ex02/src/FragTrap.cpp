/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:36 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 21:01:56 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

//Constructor with name
FragTrap::FragTrap(string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30; 
	cout << "A FragTrap named " << name << " has been created!" << endl;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	cout << "A copy of FragTrap named " << name << " has been created!" << endl;
}

//Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &copy) {
	cout << "FragTrap assignment operator called" << endl;
	
	if (this!= &copy) { //Check for self-assignment
		ClapTrap::operator=(copy); //Call base class assignment operator
	}
	return (*this);
}

//Destructor
FragTrap::~FragTrap() {
	cout << "FragTrap named " << name << " has been destroyed!" << endl;
}

void FragTrap::highFivesGuys() {
	cout << name << ": Can I get a high five? Up high!" << endl;
}

