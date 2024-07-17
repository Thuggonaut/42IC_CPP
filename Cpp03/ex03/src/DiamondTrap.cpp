/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:59:18 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 22:21:01 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) 
	: ClapTrap(name + "_ClapTrap"), ScavTrap(name + "_ScavTrap"), FragTrap(name + "_FragTrap"), name(name) {
	
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	cout << "A DiamondTrap named " << name << " has been created!" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	cout << "A copy of DiamondTrap named " << name << " has been created!" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
	if (this!= &copy) {
		ClapTrap::operator=(copy);
        ScavTrap::operator=(copy);
        FragTrap::operator=(copy);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap named " << name << " has been destroyed!" << endl;
}

void DiamondTrap::whoAmI() {
	cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << endl;
}