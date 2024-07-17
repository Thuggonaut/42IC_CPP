/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:59:03 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 22:03:40 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap { //Ensure the initializations in the implementations are in the same order
	private:
		string name; //Unique identiefier distinct from the base ClapTrap object

	public:
		DiamondTrap(string name); //Constructor with a unique identifier
		DiamondTrap(const DiamondTrap &copy); //Copy constructor
		DiamondTrap &operator=(const DiamondTrap &copy); //Copy assignment operator
		~DiamondTrap(); //Destructor

		void whoAmI(); //Specific function to DiamondTrap class
		using ScavTrap::attack; //Using ScavTrap's attack function
};


#endif