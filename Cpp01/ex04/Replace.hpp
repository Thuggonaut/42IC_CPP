/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:37:43 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 20:37:05 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream> //For file stream operations e.g. ifstream, ofstream to read/open files
#include <sstream> //For stringstream operations
#include <stdexcept> //For handling exceptions

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::stringstream;
using std::exception;
using std::ifstream;
using std::ofstream;
using std::runtime_error;


class Replace {
	public:
		string filename;
		string search;
		string replace;

		Replace(const string &filename, const string &search, const string &replace);
		void doReplace();
		string readFile();
		void writeFile(const string &content); 
};

#endif