/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:24 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/24 22:22:58 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(7, "Zombie"); //Create a horde of 7 zombies with the name "Zombie"

	delete[] horde;
	return (0);
}