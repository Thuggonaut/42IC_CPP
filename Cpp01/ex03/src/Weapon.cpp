/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:53:19 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 20:13:05 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

//Initialize weapon with given type
Weapon::Weapon(const string &type) 
	: type(type) {}

//Return a constant reference to the type attribute of `Weapon`
const string &Weapon::getType() const {
	return (type); //Return weapon type
}

//Update weapon type to new value
void Weapon::setType(const string &type) {
	this->type = type; 
}