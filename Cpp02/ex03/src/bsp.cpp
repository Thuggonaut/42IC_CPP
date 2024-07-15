/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:18:33 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/13 19:20:06 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

//Calculate the area of a triangle given its vertices
//Use the absolute value abs() to avoid negative area issues
Fixed Point::triangleArea(Point const a, Point const b, Point const c) {
	return (abs(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + 
			b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + 
			c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f);
}

//Check if a point lies inside a the triangle
bool Point::bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed abc = triangleArea(a, b, c); //Calculate the area of the triangle
	Fixed pab = triangleArea(point, a, b); //Calculate the area of the triangle formed by point and a
	Fixed pbc = triangleArea(point, b, c); //Calculate the area of the triangle formed by point and b
	Fixed pca = triangleArea(point, c, a); //Calculate the area of the triangle formed by point and c

	//Check if the sum of the areas of the sub-triangles is equal to the area of the original triangle
	return (abc >= (pab + pbc + pca)); //Return true if the point lies inside the triangle, false otherwise
}
