/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/15 14:11:34 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
//Test the constructor functions
//Output for all ClapTraps objects will have the same name, because they're essentially copies of the first object
int main()
{
	ClapTrap bot1("Bot 1"); //Call constructor with name
	ClapTrap bot2(bot1); //Call copy constructor
	ClapTrap bot3; //Call default constructor
	
	bot3 = bot2; //Call assignment operator

	cout << endl << "Initiate attack!" << endl;

	bot1.attack(bot2);
	bot2.beRepaired(5);

	return (0);
}
*/

//Test the member functions
int main()
{
	ClapTrap bot1("Bot 1");
	ClapTrap bot2("Bot 2");
	ClapTrap bot3("Bot 3");
	ClapTrap bot4("Bot 4");

	cout << endl << "Initiate attack!" << endl;

	bot1.attack(bot2);
	bot2.beRepaired(5);
	bot2.attack(bot3);
	bot3.attack(bot1);
	bot1.beRepaired(5);
	bot4.attack(bot1);
	bot4.attack(bot3);

	return (0);
}