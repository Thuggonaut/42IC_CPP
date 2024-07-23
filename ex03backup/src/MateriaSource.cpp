/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:14:24 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/23 20:47:54 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	cout << WHITE_BB << "MateriaSource Default Constructor called" << RESET << endl;
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	cout << WHITE << "MateriaSource Copy Constructor called" << RESET << endl;
	for (int i = 0; i < 4; i++)
		materias[i] = copy.materias[i]; //Copy the materias from the source (copy) even if they are NULL
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	cout << WHITE << "MateriaSource Copy Assignment Operator called" << RESET << endl;
	if (this != &copy) {
		for (int i = 0; i < 4; i++)
			materias[i] = copy.materias[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	cout << RED_BB << "MateriaSource Destructor called" << RESET << endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] == NULL) {
			materias[i] = m; //Store the Materia in m
			cout << WHITE << "Materia " << m->getType() << " learned" << RESET << endl;
			return;
		}
	}
	cout << RED << "Capped at 4: no space to learn new Materia" << RESET << endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] && materias[i]->getType() == type) {
			cout << WHITE << "Creating Materia type " << type << RESET << endl;
			return (materias[i]->clone()); // Return a copy of the Materia
		}
	}
	return (NULL);
}