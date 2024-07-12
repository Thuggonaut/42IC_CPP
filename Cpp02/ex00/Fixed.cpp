/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:45:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/11 22:20:25 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Initialize the fixed point value to 0
Fixed::Fixed() : fpValue(0) {
	cout << "Default constructor called" << endl;
}

//Initialize the copied Fixed object with the copied fixed point value
Fixed::Fixed(const Fixed &copy) : fpValue(copy.fpValue) {
	cout << "Copy constructor called" << endl;
}

//Copy the value of `fpValue` from the `copy` object to the current object
Fixed &Fixed::operator=(const Fixed &copy) {
	cout << "Copy assignment operator called" << endl;
	if (this != &copy) //Check for self-assignment, if the current object `this` is the same as the object `copy`
		this->fpValue = copy.fpValue; //Copy the value of `fpValue` from the `copy` object to the current object
	return (*this); //Return a reference to the current object
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

//Get the raw value of the fixed point number
int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return (fpValue);
}

//Set the raw value of the fixed point number
void Fixed::setRawBits(int const raw) {
	cout << "setRawBits member function called" << endl;
    fpValue = raw;
}