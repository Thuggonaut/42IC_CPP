/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:35:11 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 14:35:12 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Zombie {
	private:
	    string name;

	public:
		Zombie(string name);
		~Zombie();
		void announce();
};

Zombie *newZombie(string name);
void randomChump(string name);

#endif