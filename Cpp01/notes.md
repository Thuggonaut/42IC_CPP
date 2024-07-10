# CPP Module 01

# Exercise 00:  BraiiiiiiinnnzzzZ

### Review:
🔹 Implement a `Zombie` class
- private, string name
- member function `void announce(void)`

🔹 In Zombie.cpp implement:
- `Zombie* newZombie( std::string name );`
	- It creates a zombie, name it, and return it so you can use it outside of the function scope.
- `void randomChump( std::string name );`
	- It creates a zombie, name it, and the zombie announces itself.
	- Each Zombie announce themselves as `<name>: BraiiiiiiinnnzzzZ...`

🔹 Zombies must be destroyed when you don’t need them anymore. 
- The destructor must print a message with the name of the zombie for debugging purposes.

🧐 ***Memory allocation on the stack***
- stores temporary variables created by functions. 
- organized in a Last-In-First-Out (LIFO) manner.
- managed automatically by the CPU.
- limited size. 
- faster access since LIFO.
- Variables are scope bound.
- 🗝️ `randomChump()` more suitable for stack allocation as it is a temporary object.
- Objects allocated on the stack are instantiated directly using the class constructor without `new`.

🧐 ***Memory allocation on the heap***
- Heap is a region of memory used for dynamic memory allocation.
- Variables are allocated and freed manually by the programmer.
- Need to explicitly allocate (`new`) and deallocate (`delete`) memory.
- 🗝️ `newZombie()` should be allocated on the heap to allow the object to persist beyond the function call and be used elsewhere in the program.
- Objects allocated on the heap are instantiated using `new`, and cleaned up using `delete`.


# Exercise 01: Moar brainz!

### Review:
🔹 Implement `Zombie* zombieHorde( int N, std::string name );`
- It must allocate `N Zombie` objects in a single allocation. 
	- Initialize the zombies, giving each one of them the name passed as parameter. 
	- The function returns a pointer to the first zombie.
- Implement your own tests to ensure your zombieHorde() function works as expected.
- Call `announce()` for each of the zombies.
- Delete all the zombies and check for memory leaks.


# Exercise 02:  HI THIS IS BRAIN

### Review:
🔹 Write a program that:
```c++
//Initialize string var to "HI THIS IS BRAIN"
	//string PTR points to string
	//string REF reference to string

//Print
	//memory address of string var
	//memory address of PTR
	//memory address of REF
	//value of all the above
```

# Exercise 03: Unnecessary violence

### Review:
🔹 Implement a` Weapon` class that has:
- A private attribute string `type`
- A `getType()` member function that returns a const reference to `type`.
- A `setType()` member function that sets `type` using the new one passed as parameter.

🔹 Implement two classes: `HumanA` and `HumanB`
- Both have a `Weapon` and a `name`
- Both have a member function `attack()` that displays:
	- `<name> attacks with their <weapon type>`

🔹 Differences:
- While `HumanA` takes the `Weapon` in its constructor, `HumanB` doesn’t.
- `HumanB` may not always have a Weapon, whereas `HumanA` will always be armed.

🔹 Output
- Print an attack with "crude spiked club" then a second attack with "some other type of club" for both test cases.

🗝️ ***HumanA should use a reference to `Weapon`*** because
- It ensures HumanA will always have a valid weapon.
	- The reference cannot be a `nullptr`.
- It provides direct access to the weapon.

🗝️ ***HumanB should use a pointer to `Weapon`*** because 
- The pointer can be initialized to `nullptr`.
	- HumanB might not be created with a weapon, but could aquire one later.
- The pointer allows for changing weapons at runtime by pointing to a different `Weapon` object. 



# Exercise 04: Sed is for losers

### Review:
🔹 Create a program that takes three parameters in the following order: 
- a `filename` and two strings, 
- `s1` and 
- `s2`
- It will open the file `<filename>` and copies its content into a new file
`<filename>.replace`, replacing every occurrence of `s1` with `s2`.
- Forbidden: `std::string::replace`
- Create and turn in your own tests to ensure your program works as expected.
```c++
//int main(int ac, char**av)
	//Handle invalid inputs

	//Open filename
		//Read contents into a string var
	
	//Replace Occurrences of s1 with s2

	//Create/open a new file named <filename>.replace
		//Write modified string to this new file
	
	//Test by opening newly created file and display its contents
```

🧐 ***What are exceptions?***
- An exception in programming is an unexpected event or condition that disrupts the normal flow of a program's execution.
- Exceptions handles errors gracefully, providing meaningful error messages to the user.
- Example:
```c++
#include <iostream>
#include <stdexcept> // For standard exceptions

using namespace std;

int main() {
    try {
        // Code that might throw an exception
        int x = -1;
        if (x < 0) {
            throw runtime_error("Negative value encountered");
        }
    } catch (const runtime_error& e) {
        // Handle runtime error exception
        cerr << "Runtime error: " << e.what() << endl;
    } catch (const exception& e) {
        // Handle any other standard exception
        cerr << "Exception: " << e.what() << endl;
    } catch (...) {
        // Catch any other type of exception
        cerr << "Unknown exception occurred" << endl;
    }

    return 0;
}

```
**try()**
- block: Contains code that might generate exceptions. 
- If an exception occurs, the rest of the try block is skipped.

**throw()**
- statement: Used to throw an exception. 
- The type of the exception determines which catch block is executed. 
- In the example, `throw runtime_error("Negative value encountered");` throws a runtime_error exception.

**catch()** 
- block: Catches and handles exceptions. 
- The type specified in the parentheses after catch determines the types of exceptions it will handle. 
- In the example, the first catch block catches runtime_error exceptions, the second catches other exception types, and the third catches any other exceptions using `catch(...)`.

**what()** 
- method: Standard exceptions have a `what()` method that returns a C-string describing the exception.

**runtime_error()**
- a standard exception class in C++ that is typically used to indicate errors that occur during runtime.
- used to throw exceptions.
-  It takes a `const std::string &argument` that represents the error message associated with the exception.
- `what()` is used to retrieve the error message associated with that exception.


