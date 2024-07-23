/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:43:19 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/21 15:57:31 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

/*
int main()
{
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
}
*/

//Run more tests here ...

int main() 
{
	if (is_abstract<AAnimal>::value)
		cout << GREEN_BB << "AAnimal class is abstract" << RESET << endl;
	else
		cout << RED_BB << "AAnimal class is not abstract" << RESET << endl;
	
	AAnimal *array[6]; //Declare an array of 6 animals

	for (int i = 0; i < 6 / 2; i++) //For the first half of the array, create Dogs
		array[i] = new Dog();
	
	for (int i = 0; i < 6 / 2; i++) //For the second half of the array, create Cats
		array[i + (6 / 2)] = new Cat();

	for (int i = 0; i < 6; i++) //Delete all animals in the array
		delete array[i];

	return (0);
}
