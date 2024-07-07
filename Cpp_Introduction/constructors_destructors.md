# Constructors
- Special member function, called when an object is created
- They initialize member variables of an object

```c++
#include <iostream>
#include <string>

using namespace std;

class Cat {
	private:
		//These variables can't be initialized since they're private - this is where constructors come in
		std::string name;
		std::string colour;
		std::string favouriteToy;

	public:
		void printCat() {
			std::cout << "Name: " << name << std::endl;
			std::cout << "Colour: " << colour << std::endl;
			std::cout << "Favourite toy: " << favouriteToy << std::endl;
		}

		//Constructor: function to initilize the private member variables
		//This function will be called each time the cat object is created
		//Must have the same name as the class
		//This function doesnt take parameters, so the variables are set to defaults
		Cat() {
			name = "Unknown";
			colour = "Unknown";
			favouriteToy = "Unknown";
		}

		//We want a constructor that takes parameters, in order to set the variables based on input to the constructor
		//We can have multiple constructors, with different prototypes
		Cat(std::string n) {
			name = n;
			colour = "Unknown";
			favouriteToy = "Unknown";
		}

		//Constructor to take more arguments
		Cat(std::string n, std::string c, std::string ft) {
			name = n;
			colour = c;
			favouriteToy = ft;
		}
};

int	main()
{
	Cat cat1; //Default contructor called

	std::cout << "Cat 1..." << std::endl;
	cat1.printCat();
	std::cout << std::endl;

	Cat cat2("Panther"); //Second constructor called

	std::cout << "Cat 2..." << std::endl;
	cat2.printCat();
	std::cout << std::endl;

	Cat cat3("Inkie", "black", "coils"); //Third constructor called

	std::cout << "Cat 3..." << std::endl;
	cat3.printCat();
	std::cout << std::endl;
}
```
- Note: Default contructors must always be declared, 


# Destructors
- member function to destroy an object and clean up.
- Uses the same class name, but with a `~` in front.
- Cannot accept any parameters.

```c++
#include <iostream>

using namespace std;

class Number {
	private:
		double number;

	public:
		//Constructor
		Number(double num) {
			number = num;
			cout << "Constructer executing!" << endl;
			cout << "Number: " << number << endl;
		}

		//Destructor
		~Nummber() {
			cout << "Destructor executing!" << endl;
			cout << "Number: " << number << endl;
		}
};

void test() { 
	Number six(6); //Object is local to a function
}

int main()
{
	Number seven(7); //Runs the contructor

	test() //Creates the object `six`. When it finishes, the object will be destroyed

	return (0);
}
```
Output:
```
Constructor executing!
Number: 7
Destructor executing!
Number: 7

Constructor executing!
Number: 6
Destructor executing!
Number: 6
```
- The constructor runs explicitly.
- The destructor is more implicit. 
- We can't see where it's called, because it's called automatically for us, e.g. when the program terminates. 
- The destructor also runs, when an object is being destroyed. 
- For example, if the object is local to a function, when the function completes its execution, the object is then destroyed. 
- We never really "call" the destructor. It occurs implicitly. 

# Destructors and dynamic memory allocation
