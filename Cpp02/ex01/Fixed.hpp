/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:35:23 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/12 00:23:54 by tquemato         ###   ########.fr       */
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
		Fixed(); //Default constructor
		Fixed(const Fixed &copy); //Copy constructor. const because it doesn't modify the object
		Fixed &operator=(const Fixed &copy); //Copy assignment operator. Returns a reference to the copied object
		Fixed(const int intValue); //Constructor from integer
		Fixed(const float floatValue); //Constructor from float
		~Fixed(); //Destructor

		float toFloat() const; //Convert fixed point value to float
		int toInt() const; //Convert fixed point value to integer
};

ostream &operator<<(ostream &out, const Fixed &fixed); //Overload the << operator to print Fixed object


#endif