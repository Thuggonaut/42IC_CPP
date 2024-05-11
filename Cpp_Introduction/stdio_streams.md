# stdio streams
- Input (accept user input) and output(print to console) in C++

- Output:
```c++
#include <iostream>

int	main()
{
	std::cout << "Printing" << std::endl; //Output a newline
	std::cout << "We can use " << "multiple insertions" << std::endl;
	std::cout << "line 1" << std::endl << "line 2" << std::endl;
	
	int x = 42;
	std::cout << "x = " << x << std::endl;
	return (0); 
}
```
- `cout` is a standard output stream object (working with streams of data) and outputs data to the console (text-based interface).
- `<<` is the stream insertion operator. In the example, we are inserting the string "Printing" to the standard output stream.
- We can use it multiple times in a chain. Output:
```
Printing
We can use multiple insertions
line 1
line 2
x = 42
```

- Input:
```c++
#include <iostream>

int	main()
{
	int	x = 0;
	std::cout << "Enter your age: ";
	std::cin >> x; //Accept a value and store it in `x`
	std::cout << "You are " << x << " years old" << std::endl;

	double	height = 0;
	double	weight = 0;
	std::cout << "Enter your height in cm and weight in kg (seperated by a space): ";
	std::cin >> height >> weight;
	std::cout << "You are " << height << " tall and weigh " << weight << " kilos" << std::endl;
	return (0);
}
```
- `cin` is a standard input stream object, and accepts use input from the terminal or console.
- `>>` is the stream extraction operator. 
- We can also use the stream extraction operator multiple times in a chain.
- Note, `cin` also ignores whitespaces preceding values it accepts. 

🧐 What happens, if the user enters a value that doesn't match the variable type?
- `cin` goes in to an error state. For example:
```c++
int	main()
{
	int	x = 0;
	std::cout << "Enter your age: "; //User will enter characters
	std::cin >> x; //The expression will return false
	return (0);
}
```
- We can detect and handle errors e.g.:
```c++
int	main()
{
	int	x = 0;
	std::cout << "Enter your age: ";
	if (std::cin >> x)
		std::cout << "You are " << x << " years old" << std::endl;
	else
	{
		std::cin.clear();
		std::cout << "Error: digit values only" << std::endl;
	}
	return (0);
}
```
- `cin.clear();` clears the `cin` error state. 
	- `clear()` function is "attached" to `cin`. 
	- The error needs to be cleared in order for `cin` to be used again.
