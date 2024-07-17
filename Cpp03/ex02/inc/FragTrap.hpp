/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:32 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 15:38:38 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap { //Declare a derived class from ClapTrap
	public:
		FragTrap(string name);  
		FragTrap(FragTrap const &copy);  
		FragTrap &operator=(FragTrap const &copy); 
		~FragTrap();  

		void highFivesGuys(); //Member function specific to FragTrap
};


#endif