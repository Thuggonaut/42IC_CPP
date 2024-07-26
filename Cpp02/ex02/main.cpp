/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:36:14 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/26 21:45:19 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) 
{
	Fixed a; //Call default constructor
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 )); //Call copy constructor, then call constructor from float multiplied by constructor from int, store result in fpValue

	std::cout << a << std::endl; //Print the default value of a
	std::cout << ++a << std::endl; //Increment a and print the new value
	std::cout << a << std::endl; //Print the new value of a
	std::cout << a++ << std::endl; //Print the value of a before increment
	std::cout << a << std::endl; //Print the updated value of a after increment
	std::cout << b << std::endl; //Print the result of the multiplication of b
	std::cout << Fixed::max( a, b ) << std::endl; //Print the maximum value between a and b

	return 0;
}

/*
Default constructor called
Int constructor called
Float constructor called
Float constructor called
Destructor called			- for Fixed(5.05)
Destructor called			- for Fixed(2)
0
Copy constructor called
0.00390625
Destructor called			- operator<< overload ++a
0.00390625
Copy constructor called
0.00390625
Destructor called			- operator<< overload a++
0.0078125
Copy constructor called
10.1016
Copy constructor called
10.1016
Destructor called			- for max(a, b)
Destructor called			- for b
Destructor called			- for a
*/