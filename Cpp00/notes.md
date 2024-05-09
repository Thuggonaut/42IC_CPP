# CPP Module 00

# Exercise 00: Megaphone

### Review:
🔹 `<cstring>` header for string manipulation: 
- Manipulate strings to convert them to uppercase such as toupper().
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

🔹 The phonebook must be instantiated as an instance of the PhoneBook class. 
🧐 ***What does "instantiated as an instance" mean?***
- 
🔹 Same thing for the contacts. Each one of them must be instantiated as an instance of the Contact class. 
🔹 Anything used inside a class is private, used outside a class is public.
