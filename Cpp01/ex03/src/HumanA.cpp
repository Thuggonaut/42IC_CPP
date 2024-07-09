/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:56:22 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 20:44:02 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

//Initialize `HumanA`'s elements with provided parameters
HumanA::HumanA(string name, Weapon &weapon)
	: name(name), weapon(weapon) {}

//Print the attack
void HumanA::attack() {
	cout << name << " attacks with their " << weapon.getType() << endl;
}

