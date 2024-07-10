/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:48:57 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 22:14:38 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(string level) {
	if (level == "debug" || level == "DEBUG")
		debug();
    else if (level == "info" || level == "INFO")
	    info();
	else if (level == "warning" || level == "WARNING")
	    warning();
	else if (level == "error" || level == "ERROR")
	    error();
}

void Harl::debug() {
	cout << "Dude, where's my car? I'm a Harl, not a car!" << endl;
}

void Harl::info() {
	cout << "I can't believe I lost my car! I hate taking public transportation!" << endl;
}

void Harl::warning() {
	cout << "I've lost my car again! I'm going to go bat shit crazy!" << endl;
}

void Harl::error() {
	cout << "I lost my car and I am now discombobulated!" << endl;
}