/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:48:57 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/25 21:48:07 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Initialize static member variables
Harl::LogLevel Harl::getLevel(const string &level) { //Harl::LogLevel is a return type of getLevel()
	if (level == "DEBUG" || level == "debug") return (DEBUG);
	if (level == "INFO" || level == "info") return (INFO);
	if (level == "WARNING" || level == "warning") return (WARNING);
	if (level == "ERROR" || level == "error") return (ERROR);
	else return (UNKNOWN);
}

//Determine which complaint to log based on the given LogLevel
void Harl::complain(LogLevel level) {
	switch (level) {
		case (DEBUG):
			debug();
			info();
			warning();
			error();
			break;
		case (INFO):
			info();
			warning();
			error();
			break;
		case (WARNING):
		    warning();
			error();
			break;
		case (ERROR):
		    error();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl << endl;
	}
}

void Harl::debug() {
	cout << "[ DEBUG ]" << endl << "Dude, where's my car? I'm a Harl, not a car!" << endl << endl;
}

void Harl::info() {
	cout << "[ INFO ]" << endl << "I can't believe I lost my car! I hate taking public transportation!" << endl << endl;
}

void Harl::warning() {
	cout << "[ WARNING ]" << endl << "I've lost my car again! I'm going to go bat shit crazy!" << endl << endl;
}

void Harl::error() {
	cout << "[ ERROR ]" << endl << "I lost my car and I am now discombobulated!" << endl << endl;
}