/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:36:14 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/11 22:03:37 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a; // Default constructor, rawBits = 0
	Fixed b( a ); // Copy constructor, rawBits = 0
	Fixed c; // Default constructor, rawBits = 0

	c = b; // Assignment operator, rawBits = 0

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}