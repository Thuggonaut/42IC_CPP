/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:55:37 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/18 00:19:46 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Rando") {
	cout << "A Random animal is born by default!" << endl;
}

Animal::Animal(const Animal &copy) {
	cout << "A clone of animal " << type << " is born!" << endl;
}

Animal &Animal::operator=(const Animal &copy) {
	cout << "A clone of the animal " << type << " is assigned!" << endl;
	if (this!= &copy)
		type = copy.type;
	return (*this);
}

Animal::~Animal() {
	cout << "The animal " << type << " is dead!" << endl;
}

void Animal::makeSound() const {
	cout << "Weowww coof coof!" << endl;
}

string Animal::getType() const {
	return (type);
}