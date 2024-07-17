/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 22:25:47 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main() 
{
    DiamondTrap dTrap("Bot1");
    
	cout << endl << "Initiate attack!" << endl << endl;
    dTrap.whoAmI();
	cout << endl;
    dTrap.attack("Enemy");
    dTrap.takeDamage(20);
	dTrap.guardGate();
    dTrap.beRepaired(10);
	dTrap.highFivesGuys();
	cout << endl;

    return (0);
}