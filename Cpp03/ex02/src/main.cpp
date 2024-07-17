/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:33:56 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/17 21:03:57 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"


/*
//Test the constructor functions
//Output for all FragTraps objects will have the same name, because they're essentially copies of the first object
int main()
{
	FragTrap bot1("Bot 1"); //Call constructor with name
	FragTrap bot2(bot1); //Call copy constructor
	FragTrap bot3; //Call default constructor
	
	bot3 = bot2; //Call assignment operator

	cout << endl << "Initiate attack!" << endl;

	bot1.highFivesGuys();
	bot1.attack(bot2);
	bot2.beRepaired(5);
	bot2.attack(bot1);
	bot3.attack(bot1);
	bot4.attack(bot1);
	bot4.attack(bot1);
	bot1.beRepaired(10);
	bot4.highFivesGuys();

	return (0);
}
*/

//Test the member functions
int main()
{
	FragTrap bot1("Bot 1");
	FragTrap bot2("Bot 2");
	FragTrap bot3("Bot 3");
	FragTrap bot4("Bot 4");

	cout << endl << "Initiate attack!" << endl;

    bot1.highFivesGuys();
	bot1.attack(bot2);
	bot2.takeDamage(bot1.getAttackDamage());
	bot2.beRepaired(5);
	bot2.attack(bot1);
	bot1.takeDamage(bot2.getAttackDamage());
	bot3.attack(bot1);
	bot1.takeDamage(bot3.getAttackDamage());
	bot4.attack(bot1);
	bot1.takeDamage(bot4.getAttackDamage());
	bot4.attack(bot1);
	bot1.takeDamage(bot4.getAttackDamage());
	bot1.attack(bot4);
	bot4.highFivesGuys();

	return (0);
}