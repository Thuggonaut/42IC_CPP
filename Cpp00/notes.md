# CPP Module 00

# Exercise 00: Megaphone

### Review:
🔹 Manipulate strings to convert them to uppercase such as toupper().
🔹 Output to console:
- Use the `std::cout` object along with the `<<` operator to print to the standard output.
	- `std::cout << "string"`
🔹 Error handling: 
- Invalid argc or argv.

### Pseudocode:
```C++
//Read Command-line Arguments
	//Check Argument Count: at least one argument is provided. If not, print message and exit
	//Declare a character array to store the concatenated arguments, initialized with 0's
	//Concatenate Arguments into a single string using strcat()
	//Convert to Uppercase
	//Print to the console
```

# Exercise 01: My Awesome PhoneBook

### Review:
🔹 Implement two classes:

🔸 PhoneBook
- Has an array of contacts
- Stores 8 contacts max
	- If the user tries to add a 9th, replace the oldest one by the new one

🔸 Contact
- A phonebook contact

🧐 ***What is a class?***
- A user-defined data type that combines data (variables) and functions (methods) that operate on that data. 
- It is a blueprint for creating objects, which are instances of the class. 
- A class can have both public and private members. Public members can be accessed from outside the class, while private members can only be accessed from within the class.

🔹 The phonebook must be instantiated as an instance of the PhoneBook class. 
🧐 ***What does "instantiated as an instance" mean?***
- Means creating an object of that class, e.g. like
```c++
PhoneBook myPhoneBook; //`myPhoneBook` is an object of the PhoneBook class
```
🔹 Same thing for the contacts. Each one of them must be instantiated as an instance of the Contact class. E.g.
```c++
Contact myContact;
```

🔹 On program start-up, the phonebook is empty
-  The user is prompted to enter one of three commands: `ADD`, `SEARCH` and `EXIT`

🔸 `ADD`: save a new contact
-  User is prompted to input the information of the new contact, one field at a time. 
	- Once all the fields have been completed, add the contact to the phonebook.
- The contact fields are: 
	- first name
	- last name
	- nickname
	- phone number
	- darkest secret
	- A saved contact can’t have empty fields

🔸 `SEARCH`: display a specific contact
- Display the saved contacts as a list of 4 columns: 
	- index
	- first name
	- lastname
	- nickname
- Each column must be 10 characters wide.
	- A pipe character (’|’) separates them. 
	- The text must be right-aligned. 
	- If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
- Then, prompt the user again for the index of the entry to display. 
	- If the index is out of range or wrong, define a relevant behavior. 
	- Otherwise, display the contact information, one field per line.

🔸 `EXIT`
- The program quits and the contacts are lost forever!

🔹 Any other input is discarded.
🔹 Once a command has been correctly executed, the program waits for another one. 
- It stops when the user inputs EXIT.

### Pseudocode:
```c++
//In .hpp

//Define class Contact
	//public:
		//string first name
		//string last name
		//string nickname
		//string phone number

		//Constructor function to initialize member variables
		
		//Function to display a contact `printContacts()`
			//Display as a column of 4, seperated by a `|`
				//index (of array)
				//first name
				//last name
				//nickname
					//Each, 10 chars wide
					//Right-align text. If longer than 10 chars, truncate and replace last char with a `.`
			//Prompt user for a contact index 
				//Handle invalid user input of index, e.g. out of range or !digit
				//If no errors, display the contact information, one field per line using `printSpecific()`

	//private:
		//string darkest secret


//Define class PhoneBook
	//public:
		//Declare an array of 8 contacts: `Contact contacts[8]` starting from index[0]

		//Function to add contacts `addContact()`
			//Prompt user input Contact fields
			//Handle input errors, such as missing fields, invalid types
			//Use `std::cin >>` to accept use input

		//If user inputs `EXIT` command
				//Terminate program


//In .cpp

//Define functions here

//PhoneBook is empty

//Prompt user for commands: `ADD`, `SEARCH` and `EXIT`
	//Handle invalid inputs: use `delete`???
	//Always wait for user commands until `EXIT`

		//If `ADD`
			//Prompt user to `addContacts()`

		//If `SEARCH`
			//Display list using `printContacts()
			//Display selected contact using `printSpecific()`

		//If `EXIT`
			//`cleanExit()` to Delete contacts and Terminate program
```


# Exercise 02: The Job Of Your Dreams

### Review:
- Recreate Account.cpp file
- Compile to pass the tests.cpp
	- Output should match the log file, with updated timestamps

### New terms learned:

**for_each()**
- `<algorithms>` header
- is a standard algorithm that applies a given function to each element in a range.

**mem_fun_ref()**
- `<algorithms>` header
- `for_each(InputIterator first InputIterator last, Function func);`
- creates a function object that calls a member function of a class. 
- It takes a pointer to a member function and a reference to an object of the class as arguments.

```c++
#include <algorithm> 

// Syntax for std::for_each()
template <class InputIterator, class Function>
Function for_each(InputIterator first, InputIterator last, Function func);

// Syntax for std::mem_fun_ref()
template <class T, class R, class M>
mem_fun_ref(R T::* mf) -> mem_fun_ref<R (T&)>;
```

**Iterators: begin() and end()**
- are member functions of the `vector` class
- obtain iterators pointing to the first, and one past the last element of the vector.

**pair class**
- has two members
- first: holds the first element of the pair
- ssecond: holds the second element

**time()**
- `time(nullptr)` or `time(0)` is saying "I don't have a time_t object, just get me the current time".

**vector**
- a dynamic array, a sequence container that can grown/shrink at runtime.
- a resizeable array that changes during runtime.
- a template class that can store elements of any data type.
- elements are stored in contiguous memory locations, allowing access and manipulation.

