/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:36:14 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/12 00:56:08 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a; //Call the default constructor
	Fixed const b( 10 ); //Call the constructor from integer
	Fixed const c( 42.42f ); //Call the constructor from float
	Fixed const d( b ); //Call the copy constructor

	a = Fixed( 1234.4321f ); //Call the assignment operator, which calls the constructor from float

	std::cout << "a is " << a << std::endl; //Print the values of a after assignment which is a float
	std::cout << "b is " << b << std::endl; //Print the values of b, an int
	std::cout << "c is " << c << std::endl; //Print the values of c, a float
	std::cout << "d is " << d << std::endl; //Print the values of d, a copy of b, an int
	std::cout << "a is " << a.toInt() << " as integer" << std::endl; //Print the values after conversion to int
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}