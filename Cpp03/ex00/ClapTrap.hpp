/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:54 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 20:37:23 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class ClapTrap {
	private:
		string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
		ClapTrap(string name); //Constructor with name parameter
		ClapTrap(const ClapTrap &copy); //Copy constructor
		ClapTrap &operator=(const ClapTrap &copy); //Copy assignment operator
		~ClapTrap(); //Destructor

		void attack(const ClapTrap &target); //Attack function
		void takeDamage(unsigned int amount); //Take damage function
		void beRepaired(unsigned int amount); //Be repaired function

		string getName() const; //Get name function
		int getHitPoints() const; //Get hit points function
		int getEnergyPoints() const; //Get energy points function
		int getAttackDamage() const; //Get attack damage function
};


#endif