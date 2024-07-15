/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:45:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/13 17:54:35 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

//Initialize the fixed point value to 0
Fixed::Fixed() : fpValue(0) {
	//cout << "Default constructor called" << endl;
}

//Initialize the copied Fixed object with the copied fixed point value
Fixed::Fixed(const Fixed &copy) : fpValue(copy.fpValue) {
	//cout << "Copy constructor called" << endl;
}

//Initialize `fpValue` using the bitwise `<<` operator
Fixed::Fixed(const int intValue) : fpValue(intValue << fractionalBits) { //Shift intValue left by 8 bits (static const) (adding 8 zeros at the end, e.g. `0000 0101` becomes `0000 0101 0000 000`)
	//cout << "Int constructor called" << endl;
}

//Initialize `fpValue` using floating point arithmetic
Fixed::Fixed(const float floatValue) : fpValue(roundf(floatValue * (1 << fractionalBits))) { //Multiply floatValue by 2^8 (256) and round the result to the nearest integer
	//cout << "Float constructor called" << endl;
}

Fixed::~Fixed() {
	//cout << "Destructor called" << endl;
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

//Copy the value of `fpValue` to `copy`
Fixed &Fixed::operator=(const Fixed &copy) {
	if (this != &copy) //Check for self-assignment, if the current object `this` is the same as the object `copy`
		this->fpValue = copy.fpValue; //Copy the value of `fpValue` from the `copy` object to the current object
	return (*this); //Return a reference to the current object
}

//Add `copy` to the current object's `fpValue` and return a new Fixed object with the sum
Fixed Fixed::operator+(const Fixed &copy) const {
	return (Fixed(this->toFloat() + copy.toFloat())); //Return a new Fixed object with the sum of the current object's `fp
}

//Subtract `copy` from the current object's `fpValue` and return a new Fixed object
Fixed Fixed::operator-(const Fixed &copy) const {
	return (Fixed(this->toFloat() - copy.toFloat())); //Return a new Fixed object with the difference of the current object's `fpValue` and the `copy` object's `fpValue`
}

//Multiply the current object's `fpValue` by `copy` and return a new Fixed object
Fixed Fixed::operator*(const Fixed &copy) const {
	return (Fixed(this->toFloat() * copy.toFloat())); //After multiplying the fpValue of both objects, scale down by shifting right by 8 bits
}

//Divide the current object's `fpValue` by `copy` and return a new Fixed object
Fixed Fixed::operator/(const Fixed &copy) const {
	if (copy.fpValue == 0) //Check for division by zero
		throw (std::runtime_error("Error: Division by zero")); //Throw an exception
	return (Fixed(this->toFloat() / copy.toFloat())); //Before dividing the fpValue of both objects, scale up by shifting left by 8 bits to maintain precision
}

bool Fixed::operator>(const Fixed &copy) const {
	return (this->fpValue > copy.fpValue); //Return true if the current object's `fpValue` is greater than the `copy` object's `fpValue`
}

bool Fixed::operator<(const Fixed &copy) const {
	return (this->fpValue < copy.fpValue); //Return true if the current object's `fpValue` is less than the `copy` object's `fpValue`
}

bool Fixed::operator>=(const Fixed &copy) const {
	return (this->fpValue >= copy.fpValue); //Return true if the current object's `fpValue` is greater than or equal to the `copy` object's `fpValue`
}

bool Fixed::operator<=(const Fixed &copy) const {
	return (this->fpValue <= copy.fpValue); //Return true if the current object's `fpValue` is less than or equal to the `copy` object's `fpValue`
}

bool Fixed::operator==(const Fixed &copy) const {
	return (this->fpValue == copy.fpValue); //Return true if the current object's `fpValue` is equal to the `copy` object's `fpValue`
}

bool Fixed::operator!=(const Fixed &copy) const {
	return (this->fpValue!= copy.fpValue); //Return true if the current object's `fpValue` is not equal to the `copy` object's `fpValue`
}

Fixed Fixed::operator++() {
	++this->fpValue; //Increment the fixed point value
	return (*this); //Return a reference to the current object
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this; //Store the current object in a temporary Fixed object
	++this->fpValue; //Increment the fixed point value
	return (temp); //Return a copy of the current object before the increment
}

Fixed Fixed::operator--() {
	--this->fpValue; //Decrement the fixed point value
	return (*this); //Return a reference to the current object
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this; //Store the current object in a temporary Fixed object
	--this->fpValue; //Decrement the fixed point value
	return (temp); //Return a copy of the current object before the decrement
}

Fixed Fixed::min(Fixed &a, Fixed &b) {
	if (a > b)
		return (b);
	return (a);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (b);
	return (a);
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
	if (a < b)
		return (b);
	return (a);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (b);
	return (a);
}

//Return and print the fixed point value to the output stream `out`
ostream &operator<<(ostream &out, const Fixed &fixed) {
	out << fixed.toFloat(); //Print the float value of `fpValue`
	return (out); //Return the output stream
}