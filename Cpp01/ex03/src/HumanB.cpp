/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:14:46 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 21:12:39 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

//Initialize HumanB's elements with the provided name and nullptr for weapon which can be changed
HumanB::HumanB(string name) 
	: name(name), weapon(nullptr) {}

//Set weapon for HumanB
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon; //Assign to the pointer, the address of the passed weapon object
}

//Print attack
void HumanB::attack() {
	if (weapon)
		cout << name << " attacks with their " << weapon->getType() << endl;
	else
		cout << name << " has no weapon!" << endl;
}
