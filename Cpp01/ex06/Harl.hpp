/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:44:29 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/11 01:05:14 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Harl {
	public:
		enum LogLevel { DEBUG, INFO, WARNING, ERROR, UNKNOWN }; //Define the LogLevel enum to represent the severity of the log messages
		void complain(LogLevel level);
		static LogLevel getLevel(const string &level); //Function to parse the log level string into the LogLevel enum. static because it does not need an instance of the class to call it
		
	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif