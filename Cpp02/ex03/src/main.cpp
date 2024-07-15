/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:36:14 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/13 19:15:38 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

int main() 
{
	Point a(1.0f, 1.0f); //Coordinates of point A. `f` declares a floating point number
	Point b(2.0f, 3.0f); //Coordinates of point B
	Point c(3.0f, 1.0f); //Coordinates of point C
	Point p(2.0f, 2.0f); //Coordinates of point P

	Point a2(1.0f, 1.0f);  
	Point b2(2.0f, 3.0f);  
	Point c2(3.0f, 1.0f);  
	Point p2(42.0f, 24.0f);  

	Point a3(0.0f, 0.0f);  
	Point b3(10.0f, 0.0f);  
	Point c3(5.0f, 10.0f);  
	Point p3(5.0f, 5.0f);

	bool inside = Point::bsp(a, b, c, p); //Check if point p is inside triangle abc and print the result
	bool inside2 = Point::bsp(a2, b2, c2, p2);
	bool inside3 = Point::bsp(a3, b3, c3, p3);

	if (inside) cout << "Test case1: Point " << p << " is inside the triangle" << endl;
	else cout << "Test case1: Point " << p << " is not inside the triangle" << endl;
	
	if (inside2) cout << "Test case2: Point " << p2 << " is inside the triangle" << endl;
	else cout << "Test case2: Point " << p2 << " is not inside the triangle" << endl;

	if (inside3) cout << "Test case3: Point " << p3 << " is inside the triangle" << endl;
	else cout << "Test case3: Point " << p3 << " is not inside the triangle" << endl;

	return (0);
}