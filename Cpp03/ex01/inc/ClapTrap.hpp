/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:54 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/16 20:12:01 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class ClapTrap {
	protected: //Protected member variables
		string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
	    ClapTrap();  
		ClapTrap(string name);  
		ClapTrap(const ClapTrap &copy);  
		ClapTrap &operator=(const ClapTrap &copy);  
		virtual ~ClapTrap(); //Virtual destructor

		virtual void attack(ClapTrap &target); //The only function marked as virtual - project specifises it prints a different message
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount); 

		string getName() const;  
		int getHitPoints() const;  
		int getEnergyPoints() const;  
		int getAttackDamage() const;  
};


#endif