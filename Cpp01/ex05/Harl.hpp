/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:44:29 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 22:14:32 by tquemato         ###   ########.fr       */
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
		void complain(string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
};


#endif