/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:04:26 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 22:15:13 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl report;

	if (ac == 2) {
		report.complain(av[1]);
	}
	else {
		cout << "Invalid input. Please use: ./harl <complaint level>" << endl;
		cout << "Valid complaint levels: DEBUG, INFO, WARNING, ERROR" << endl;
	}

	return (0);
}