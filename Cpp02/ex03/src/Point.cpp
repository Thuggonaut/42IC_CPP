/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:18:36 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/15 13:42:58 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

//Initialize the Point object with default coordinates (0, 0)
Point::Point() : x(0), y(0) {}

//Inititialize the Point object with given coordinates
Point::Point(const float x, const float y) : x(x), y(y) {}

//Initialize the copied Point object with the copied coordinates
Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}

//⚠️⚠️⚠️ Issue with this operator= implementation
//It tries to assign values to x and y, which are const members which cannot be done after they have been initialized
//Using `const_cast` as a workaround to adhere to the project rules but is not a recommended practice
Point &Point::operator=(const Point &copy) {
	if (this!= &copy) { //Check for self-assignment to avoid
		Point temp(copy); //Copy `copy` to a temporary object
	    const_cast<Fixed&>(this->x) = temp.x; //Remove the const qualifier from the Fixed object...
		const_cast<Fixed&>(this->y) = temp.y; //...so that the x and y coordinates can be modified
	}
	return (*this);
}

Point::~Point() {}

//Get the x-coordinate of the Point
Fixed Point::getX() const { return (x); }

//Get the y-coordinate of the Point
Fixed Point::getY() const { return (y); }

//Print and return the Point coordinates
ostream &operator<<(ostream &out, const Point &p) {
	out << "(" << p.getX().toFloat() << ", " << p.getY().toFloat() << ")";
	return (out);
}