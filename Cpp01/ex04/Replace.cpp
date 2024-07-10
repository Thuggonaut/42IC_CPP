/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:37:41 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/10 20:30:50 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

//Initialize the Replace's members with the provided parameters
Replace::Replace(const string &filename, const string &search, const string &replace)
	: filename(filename), search(search), replace(replace) {}

//Read the file and return its content as a string
string Replace::readFile() {
	ifstream file(filename); //Declare a file stream for the file to be read from
	if (!file.is_open()) //Check if the file was unsuccessfully opened
		throw (runtime_error("Error opening file: " + filename)); //Throw an exception if the file couldn't be opened
	
	stringstream buffer; //Create a stringstream to store the file's content
	buffer << file.rdbuf(); //Read the file's content into the stringstream buffer
	file.close(); //Close the file stream
	return (buffer.str()); //Return the file's content as a string
}

//Write the modified content to the file
void Replace::writeFile(const string &content) {
	ofstream file(filename + ".replace"); //Declare a file stream for the file to be written to. Append ".replace"
	if (!file.is_open()) //Check if the file was unsuccessfully opened
		throw (runtime_error("Error opening file: " + filename + ".replace")); //Throw an exception
	file << content; //Write the updated content to the file is successfully opened
	file.close(); //Close the file stream
}

void Replace::doReplace() {
	try {
		string content = readFile(); //Read the file's content
		size_t pos = 0; //Initialize the position to search for the string `search` in content
		size_t prev_pos = 0; //Initialize the previous position to keep track of the last found position
		string updated_content; //To store the modified content

		//Loop until there are no more occurrences of `search` in content
		while ((pos = content.find(search, prev_pos)) != string::npos) {
			updated_content += content.substr(prev_pos, pos - prev_pos); //Add the substring before the found `search` to the updated content
			updated_content += replace; //Add the replacement string to the updated content
			prev_pos = pos + search.length(); //Update the previous position to the position after the found `search`
		}

		updated_content += content.substr(prev_pos); //Add the remaining substring after the last found `search` to the updated content

		writeFile(updated_content); //Write the updated content to the file
		cout << "Replaced successfully! Check " << filename << ".replace" << endl;
	}
	catch (const exception &error) { //Catch any exceptions that were thrown during runtime
		cerr << "Error: " <<error.what() << endl; //Print the error message to the standard error stream
	}
}