#include <iostream>
#include <cstring> //String manipulation
#include <cctype> //Test/manipulate characters

//Read Command-line Arguments
int	main(int argc, char **argv)
{
	//Check Argument Count: at least one argument is provided. If not, print message and exit
	if (argc >= 2)
	{
		char *res;

		while (argc >= 2)
		{
			//Concatenate Arguments into a single string
			//Doesn't print double quotes: a string can be enclosed in quotes or without
			//Convert to Uppercase
			//Print to the console
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" std::endl;
	return (0);
}
