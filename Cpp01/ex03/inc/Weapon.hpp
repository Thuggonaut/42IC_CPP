/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:53:21 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/09 21:10:30 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon {
	private:
		string type;
	
	public:
	    Weapon(const string &type); //const because we don't want to change the weapon object itself
		const string &getType() const; //const because we don't want to change the type of the weapon
		void setType(const string &type); //void because we want to change the type of the weapon
};

#endif