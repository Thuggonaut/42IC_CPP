/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:13:44 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 21:11:00 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BHUMAN_H
#define BHUMAN_H

#include "../inc/Weapon.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class HumanB {
	public:
		string name; //Name of the human
		Weapon *weapon; //Pointer to the weapon of the human 
		HumanB(string name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif