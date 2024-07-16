/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:36 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/16 21:05:43 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

//Default constructor
ScavTrap::ScavTrap() : ClapTrap() { 
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20; 
	cout << "A default ScavTrap has been created!" << endl;
}

//Constructor with name
ScavTrap::ScavTrap(string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20; 
	cout << "A ScavTrap named " << name << " has been created!" << endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	cout << "A copy of ScavTrap named " << name << " has been created!" << endl;
}

//Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	cout << "ScavTrap assignment operator called" << endl;
	
	if (this!= &copy) { //Check for self-assignment
		ClapTrap::operator=(copy); //Call base class assignment operator
	}
	return (*this);
}

//Destructor
ScavTrap::~ScavTrap() {
	cout << "ScavTrap named " << name << " has been destroyed!" << endl;
}

//Overidden attack function
void ScavTrap::attack(ClapTrap &target) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		cout << "ScavTrap " << name << " has no hit points or energy points to attack or repair!" << endl;
		return ;
	}
	else {
		cout << "ScavTrap " << name << " attacks " << target.getName() << " causing " << attackDamage << " points of damage!" << endl;
		target.takeDamage(attackDamage);
		energyPoints--;
		cout << "ScavTrap " << name << " has " << energyPoints << " energy points remaining." << endl;
	}
}

void ScavTrap::guardGate() {
	cout << "ScavTrap " << name << " is now in Gate keeper mode." << endl;
}

