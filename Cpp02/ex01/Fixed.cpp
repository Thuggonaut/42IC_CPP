/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:45:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/12 00:52:39 by tquemato         ###   ########.fr       */
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

//Initialize `fpValue` using the bitwise `<<` operator
Fixed::Fixed(const int intValue) : fpValue(intValue << fractionalBits) { //Shift intValue left by 8 bits (static const) (adding 8 zeros at the end, e.g. `0000 0101` becomes `0000 0101 0000 000`)
	cout << "Int constructor called" << endl;
}

//Initialize `fpValue` using floating point arithmetic
Fixed::Fixed(const float floatValue) : fpValue(roundf(floatValue * (1 << fractionalBits))) { //Multiply floatValue by 2^8 (256) and round the result to the nearest integer
	cout << "Float constructor called" << endl;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

//Convert `fpValue` to a floating point number
//e.g. static_cast<float>(10856) / 256 = 42.42
float Fixed::toFloat() const {
	return (static_cast<float>(fpValue) / (1 << fractionalBits)); //Convert the fixed point value back into a floating-point number
}

//Convert `fpValue` to an integer
int Fixed::toInt() const {
	return (fpValue >> fractionalBits); //Shift the fixed point value right by 8 bits (removing 8 zeros at the end)
}

//Return and print the fixed point value to the output stream `out`
ostream &operator<<(ostream &out, const Fixed &fixed) {
	out << fixed.toFloat(); //Print the float value of `fpValue`
    return (out); //Return the output stream
}