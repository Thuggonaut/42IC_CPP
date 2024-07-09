/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:53:53 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 20:44:04 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AHUMAN_H
#define AHUMAN_H

#include "../inc/Weapon.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class HumanA {
	public:
	    string name; //Name of the human
		Weapon &weapon; //Reference to the weapon object of the human
		HumanA(string name, Weapon &weapon);
		void attack(); 
};

#endif