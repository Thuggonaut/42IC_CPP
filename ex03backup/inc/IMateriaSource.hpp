/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:14:18 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/23 20:17:05 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"


class IMateriaSource {
	public:
		virtual ~IMateriaSource() {} //Destructor
		virtual void learnMateria(AMateria*) = 0; //Learn a Materia
		virtual AMateria* createMateria(std::string const & type) = 0; //Create a Materia
};


#endif