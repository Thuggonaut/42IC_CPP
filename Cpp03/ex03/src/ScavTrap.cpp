/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:36 by tquemato          #+#    #+#             */
/*   Updated: 2024/08/02 19:40:34 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

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
void ScavTrap::attack(const ClapTrap &target) {
	if (hitPoints <= 0) {
		cout << name << " is dry of hit points, it cannot tickle!" << endl;
		return ;
	}
	else {
		cout << name << " tickles " << target.getName() << " causing " << attackDamage << " points of damage!" << endl;
		energyPoints--;
		cout << name << " has " << energyPoints << " energy points remaining." << endl;
	}
}

void ScavTrap::guardGate() {
	cout << "ScavTrap " << name << " is now in Gate keeper mode." << endl;
}

