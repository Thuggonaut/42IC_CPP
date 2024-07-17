/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:20:30 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/18 01:27:26 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() {
	cout << "A Dog has been born by default!" << endl;
	type = "Dog"; //Maybe use this->
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	cout << "A Dog has been born from a copy!" << endl;
	type = copy.type; //Maybe use this->
}//TODO we are up to here, edit ansi first