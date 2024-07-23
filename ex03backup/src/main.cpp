/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:13:30 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/23 21:21:03 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource(); //Create a new MateriaSource `src`
	src->learnMateria(new Ice()); //`src` learns the Ice materia
	src->learnMateria(new Cure()); //`src` learns the Cure materia
	ICharacter* me = new Character("me"); //Create a new Character `me`

	AMateria* tmp; //Create a new AMateria `tmp`

	tmp = src->createMateria("ice"); //`tmp` is assigned the Ice materia created by `src`
	me->equip(tmp); //`me` equips `tmp`
	tmp = src->createMateria("cure"); //`tmp` is assigned the Cure materia created by `src`
	me->equip(tmp); //`me` equips `tmp`
	ICharacter* bob = new Character("bob"); //Create a new Character `bob`	
	me->use(0, *bob); //`me` uses the first materia on `bob`
	me->use(1, *bob); //`me` uses the second materia on `bob`

	delete bob;
	delete me;
	delete src;
	return 0;
}
//todo more tests

/*
Should output:
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
*/
