/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/16 21:06:08 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"


//Test the constructor functions
//Output for all ScavTraps objects will have the same name, because they're essentially copies of the first object
int main()
{
	ScavTrap bot1("Bot 1"); //Call constructor with name
	ScavTrap bot2(bot1); //Call copy constructor
	ScavTrap bot3; //Call default constructor
	
	bot3 = bot2; //Call assignment operator

	cout << endl << "Initiate attack!" << endl;

	bot1.attack(bot2);
	bot2.beRepaired(5);

	return (0);
}


/*
//Test the member functions
int main()
{
	ScavTrap bot1("Bot 1");
	ScavTrap bot2("Bot 2");
	ScavTrap bot3("Bot 3");
	ScavTrap bot4("Bot 4");

	cout << endl << "Initiate attack!" << endl;

	bot1.attack(bot2);
	bot2.beRepaired(5);
	bot2.attack(bot3);
	bot3.attack(bot1);
	bot1.beRepaired(5);
	bot4.attack(bot1);
	bot4.attack(bot3);

	return (0);
}*/