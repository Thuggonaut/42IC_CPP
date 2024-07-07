# stdio streams
- Input (accept user input) and output(print to console) in C++

# Output:
```c++
#include <iostream>

using namespace std;

int	main()
{
	cout << "Printing" << endl; //Output a newline
	cout << "We can use " << "multiple insertions" << endl;
	cout << "line 1" << endl << "line 2" << endl;
	
	int x = 42;
	cout << "x = " << x << endl;
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

# Input:
```c++
#include <iostream>

using namespace std;

int	main()
{
	int	x = 0;
	cout << "Enter your age: ";
	cin >> x; //Accept a value and store it in `x`
	cout << "You are " << x << " years old" << endl;

	double	height = 0;
	double	weight = 0;
	cout << "Enter your height in cm and weight in kg (seperated by a space): ";
	cin >> height >> weight;
	cout << "You are " << height << " tall and weigh " << weight << " kilos" << endl;
	return (0);
}
```
- `cin` is a standard input stream object, and accepts user input from the terminal or console.
- `>>` is the stream extraction operator. 
- We can also use the stream extraction operator multiple times in a chain.
- Note, `cin` also ignores whitespaces preceding values it accepts. 

🧐 What happens, if the user enters a value that doesn't match the variable type?
- `cin` goes in to an error state. For example:
```c++
#include <iostream>

using namespace std;

int	main()
{
	int	x = 0;
	cout << "Enter your age: "; //User will enter characters
	cin >> x; //The expression will return false
	return (0);
}
```
- We can detect and handle invalid inputs e.g.:
```c++
#include <iostream>

using namespace std;

int	main()
{
	int	x = 0;
	cout << "Enter your age: ";
	if (cin >> x)
		cout << "You are " << x << " years old" << endl;
	else
	{
		cin.clear();
		cout << "Error: digit values only" << endl;
	}
	cin.ignore(1000, '\n');
	return (0);
}
```
- `cin.clear()` clears the `cin` error state. 
	- `clear()` function is "attached" to `cin`. 
	- The error needs to be cleared in order for `cin` to be used again.
- `cin.ignore()` is used to get rid of characters left in the input stream after the error.
	- `(1000, '\n')` is saying "ignore the next 1000 characters in the input stream until the first newline. 

- Using `cin` to accept string inputs, it will stop at the first space character encountered.
- If we want it to accept the spaces, we use the `getline()`:
- `getline()` stops reading the string at the first newline.
```c++
#include <iostream>

using namespace std;

int	main()
{
	string	name;
	cout << "Enter your name: ";
	getline(cin, name); //Use `cin` to store the string entered, into `name`
	cout << "Hello " << name << "!" << endl;
	return (0);
}
```