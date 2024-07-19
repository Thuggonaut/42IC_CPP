/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:09:00 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/19 22:39:34 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() {
	cout << MAGENTA_BB << "A Cat has been born by default!" << RESET << endl;
	type = "Cat"; 
	catBrain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	cout << MAGENTA_BB << "A Cat has been born from a copy!" << RESET << endl;
	type = copy.type; 
	catBrain = copy.catBrain;
}

Cat &Cat::operator=(const Cat &copy) {
	//cout << MAGENTA_BB << "A clone of a Cat has been assigned!" << RESET << endl;
	if (this != &copy) {
        type = copy.type; 
		catBrain = copy.catBrain;
	}
    return (*this);
}

Cat::~Cat() {
	cout << RED_BB << "A Cat has died!" << RESET << endl;
	delete catBrain; 
}

void Cat::makeSound() const {
	cout << MAGENTA_BB << "Meow!" << RESET << endl;
}

Brain *Cat::getBrain() const {
	return (catBrain);
}