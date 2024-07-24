/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:48 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/24 22:22:14 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::to_string;


class Zombie {
	private:
		string name;

	public:
		Zombie(); //Default constructor
		Zombie(string name); //Constructor with a name parameter
		~Zombie(); //Destructor
		void announce(); //Announce function
};

Zombie *newZombie(string name);
Zombie *zombieHorde(int N, string name);

#endif