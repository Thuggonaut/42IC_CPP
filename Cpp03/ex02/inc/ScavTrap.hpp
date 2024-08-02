/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:32 by tquemato          #+#    #+#             */
/*   Updated: 2024/08/02 19:39:58 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap { //Declare a derived class from ClapTrap
	public:
		ScavTrap(string name); //Constructor with a parameter
		ScavTrap(ScavTrap const &copy); //Copy constructor
		ScavTrap &operator=(ScavTrap const &copy); //Copy assignment operator
		~ScavTrap(); //Destructor

		void attack(const ClapTrap &target); //Display different attack message
		void guardGate(); //Member function specific to ScavTrap

};


#endif

//`override` in some cases can be used to indicate that a member function is intended to override a base class function