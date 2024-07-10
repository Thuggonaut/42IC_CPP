/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:04:26 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/11 01:18:44 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl report;

	if (ac == 2) {
		Harl::LogLevel level = Harl::getLevel(av[1]); //Initialize log level based on input
		report.complain(level);
	}
	else {
		cout << "\033[1;31mInvalid input\033[0m" << endl << "Please use: ./harl <complaint level> OR <custom complaint>" << endl;
		cout << "Valid complaint levels: DEBUG, INFO, WARNING, ERROR" << endl;
	}

	return (0);
}