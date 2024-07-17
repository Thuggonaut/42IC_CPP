/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:50:50 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 21:12:24 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

//Initialize object members with given name parameter
ClapTrap::ClapTrap(string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10) {
	cout << "ClapTrap constructor called with name: " << name << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
	cout << "ClapTrap copy constructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	cout << "ClapTrap assignment operator called" << endl;
	
	if (this!= &copy) { //Check for self-assignment
	    this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	cout << "ClapTrap destructor called for " << name << endl;
}

void ClapTrap::attack(const ClapTrap &target) {
	if (hitPoints <= 0) {
		cout << name << " has no hit points or energy points to attack!" << endl;
		return ;
	}
	else {
		cout << name << " attacks " << target.getName() << " causing " << attackDamage << " points of damage!" << endl;
		energyPoints--;
		cout << name << " has " << energyPoints << " energy points remaining." << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	cout << name << " takes " << amount << " points of damage and has " << hitPoints << " hit points remaining." << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints <= 0) {
		cout << name << " has no energy points to repair!" << endl;
		return ;
	}
	else {
		energyPoints--;
		hitPoints += amount;
		cout << name << " repairs itself and now has " << hitPoints << " hit points." << endl;
		cout << name << " has " << energyPoints << " energy points remaining." << endl;
	}
}

string ClapTrap::getName() const { return name; }
int ClapTrap::getHitPoints() const { return hitPoints; }
int ClapTrap::getEnergyPoints() const { return energyPoints; }
int ClapTrap::getAttackDamage() const { return attackDamage; }
