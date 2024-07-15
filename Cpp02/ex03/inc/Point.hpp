/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:19:04 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/13 19:06:38 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x; //Create a Fixed object to store the x coordinate
		Fixed const y; //Create a Fixed object to store the y coordinate

	public:
		Point(); //Default
		Point(const float x, const float y); //Constructor with floating point parameters
		Point(const Point &copy); //Copy constructor
		Point &operator=(const Point &copy); //Copy assignment operator
		~Point(); //Destructor

        Fixed getX() const; //Getter for x coordinate
		Fixed getY() const; //Getter for y coordinate
        
		static Fixed triangleArea(Point const a, Point const b, Point const c); //Calculate the area of a triangle given its vertices. static because we want to use it across different instances of the class
		static bool bsp(Point const a, Point const b, Point const c, Point const point); //static because we want to use it across different instances of the class
};

ostream &operator<<(ostream &out, const Point &p); //Overload the << operator and print the coordinates of a Point


#endif