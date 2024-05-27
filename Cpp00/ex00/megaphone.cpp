/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:29:30 by tquemato          #+#    #+#             */
/*   Updated: 2024/05/27 15:04:57 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string> 
#include <cctype> //Test/manipulate characters like toupper()

using std::string; 
using std::cout; 
using std::endl;

//Check Argument Count: at least one argument is provided. If not, print message and exit
//Declare a string var to store the concatenated arguments
//Concatenate Arguments into a single string
//Convert to Uppercase
//Print to the console
//Note the for loops: `i` is incremented after the first strcat() execution and updated before subsequent iterations
int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		string res;

		for (int i = 1; i < argc; ++i)
			res += argv[i]; 

		for (int i = 0; res[i] != '\0'; ++i)
			res[i] = std::toupper(res[i]);
		
		cout << res << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return (0);
}
