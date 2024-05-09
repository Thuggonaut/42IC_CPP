/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:29:30 by tquemato          #+#    #+#             */
/*   Updated: 2024/05/09 18:43:38 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring> //String manipulation like strcat()
#include <cctype> //Test/manipulate characters like toupper()

//Check Argument Count: at least one argument is provided. If not, print message and exit
//Declare a character array to store the concatenated arguments, initialized with 0's
//Concatenate Arguments into a single string using strcat()
//Convert to Uppercase
//Print to the console
//Note the for loops: `i` is incremented after the first strcat() execution and updated before subsequent iterations

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char res[1000] = {0};

		for (int i = 1; i < argc; ++i)
			strcat(res, argv[i]);

		for (int i = 0; res[i] != '\0'; ++i)
			res[i] = std::toupper(res[i]);
		
		std::cout << res << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
