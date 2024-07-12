/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:35:23 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/12 17:03:43 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> //For roundf()

using std::cout;
using std::endl;
using std::ostream;


class Fixed {
	private:
		int fpValue; //Store the fixed point value
		static const int fractionalBits = 8; //Number of fractional bits

	public:
	    //Constructors and destructor
		Fixed(); //Default constructor
		Fixed(const Fixed &copy); //Copy constructor. const because it doesn't modify the object
		Fixed(const int intValue); //Constructor from integer
		Fixed(const float floatValue); //Constructor from float
		~Fixed(); //Destructor

		//Conversion member functions
		float toFloat() const; //Convert fixed point value to float
		int toInt() const; //Convert fixed point value to integer

		//Arithmetic operators
		Fixed &operator=(const Fixed &copy); //Copy assignment operator. Returns a reference to the copied object
		Fixed operator+(const Fixed &copy) const; //Addition assignment operator. Returns a reference to the modified object
		Fixed operator-(const Fixed &copy) const; //Subtraction assignment operator. Returns a reference to the modified object
		Fixed operator*(const Fixed &copy) const; //Multiplication assignment operator. Returns a reference to the modified object
		Fixed operator/(const Fixed &copy) const; //Division assignment operator. Returns a reference to the modified object

		//Comparison operators
		bool operator>(const Fixed &copy) const; //Greater than operator
		bool operator<(const Fixed &copy) const; //Less than operator
        bool operator>=(const Fixed &copy) const; //Greater than or equal to operator
		bool operator<=(const Fixed &copy) const; //Less than or equal to operator
        bool operator==(const Fixed &copy) const; //Equal to operator
        bool operator!=(const Fixed &copy) const; //Not equal to operator

		//Increment and decrement operators
		Fixed &operator++(); //Prefix increment operator. Returns a reference to the modified object
		Fixed operator++(int); //Postfix increment operator. Returns a copy of the original object before modification
		Fixed &operator--(); //Prefix decrement operator. Returns a reference to the modified object
		Fixed operator--(int); //Postfix decrement operator. Returns a copy of the original object before modification

		//Static overloaded member functions
		static Fixed min(Fixed &a, Fixed &b); //todo Static function to find the smallest fixed point number
		static Fixed min(const Fixed &a, const Fixed &b); //todo Static function to find the smallest constant fixed point
		static Fixed max(Fixed &a, Fixed &b); //todo Static function to find the largest fixed point number
		static Fixed max(const Fixed &a, const Fixed &b); //todo Static function to find the largest constant fixed point number

};

ostream &operator<<(ostream &out, const Fixed &fixed); //Overload the << operator and print Fixed object


#endif