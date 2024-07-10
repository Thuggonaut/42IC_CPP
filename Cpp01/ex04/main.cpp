/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:37:35 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 20:36:29 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	string filename = av[1];
	string search = av[2];
	string replace = av[3];
	
	if (ac == 4) {
		try {
			Replace searchPrep(filename, search, replace); //Initialize the Replace object with the provided parameters
			searchPrep.doReplace(); //Perform the replacement operation
		}
		catch (const exception &error) { //Catch and print any exceptions that occur during runtime
			cerr << "Error: " << error.what() << endl;
			return (1);
		}
	}
	else { 
		cerr << "Usage:./replace <filename> <search_string> <replace_string>" << endl;
		return (1);
	}
	
	return (0);
}