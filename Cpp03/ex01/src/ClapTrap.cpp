/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:59 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/16 20:51:21 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

//Initialize default object members
ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(10) {
	cout << "Default constructor called" << endl;
}

//Initialize object members with given name parameter
ClapTrap::ClapTrap(string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10) {
	cout << "Constructor called with name: " << name << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
	cout << "Copy constructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	cout << "Assignment operator called" << endl;
	
	if (this!= &copy) { //Check for self-assignment
	    this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	cout << "Destructor called for " << name << endl;
}

void ClapTrap::attack(ClapTrap &target) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		cout << name << " has no hit points or energy points to attack or repair!" << endl;
		return ;
	}
	else {
		cout << name << " attacks " << target.getName() << " causing " << attackDamage << " points of damage!" << endl;
		target.takeDamage(attackDamage);
		energyPoints--;
		cout << name << " has " << energyPoints << " energy points remaining." << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	cout << name << " has " << hitPoints << " hit points remaining." << endl;
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

/*
- When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
- When ClapTrap repairs itself, it gets <amount> hit points back. 
- Attacking and repairing cost 1 energy point each. 
- Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
*/