/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:35:23 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/11 22:03:51 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

using std::cout;
using std::endl;


class Fixed {
	private:
		int fpValue; //Store the fixed point value
		static const int fractionalBits = 8; //Number of fractional bits

	public:
		Fixed(); //Default constructor
		Fixed(const Fixed &copy); //Copy constructor. const because it doesn't modify the object
		Fixed &operator=(const Fixed &copy); //Copy assignment operator. Returns a reference to the copied object
		~Fixed(); //Destructor

		int getRawBits() const; //Return the raw bits representation of the fixed point number
		void setRawBits(int const raw); //Set the raw bits representation of the fixed point number
};


#endif