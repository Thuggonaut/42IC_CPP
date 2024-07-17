/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:43:19 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 23:02:19 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

int main()
{
	const Animal *meta = new Animal(); //Declare a base class pointer to a new Animal object
	const Animal *j = new Dog(); //Declare a base class pointer to a new Dog object
	const Animal *i = new Cat(); //Declare a base class pointer to a new Cat object

	std::cout << j->getType() << " " << std::endl; //Will display the dog type!
	std::cout << i->getType() << " " << std::endl; //Will display the cat type!
	i->makeSound(); //Will output the cat sound!
	j->makeSound(); //Will output the dog sound!
	meta->makeSound(); // Will output the animal sound!
	
	//Run more tests here for WrongAnimal...

	return (0);
}