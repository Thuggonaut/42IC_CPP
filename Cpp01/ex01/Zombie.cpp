/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:33 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 14:57:17 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() //Initialize the object's data members with default values
	: name("") {}

Zombie::Zombie(string name) //Initilize the variable `name` with the given parameter
	: name(name) {}

Zombie::~Zombie() {
	cout << name << " is dead" << endl; //Print message when object destroyed
}

void Zombie::announce() {
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie *zombieHorde(int N, string name) {
	if (N <= 0)
		return (nullptr); 
	
	Zombie *horde = new Zombie[N]; //Allocate an array of pointers on the heap
		
	for (int i = 0; i < N; i++) {
		new (&horde[i]) Zombie(name + to_string(i + 1)); //Construct each zombie and append id to zombie name
		horde[i].announce();
	}
	return (horde); //Return a pointer to the array of pointers
}
