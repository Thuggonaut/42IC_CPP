# Member variables
- Regular or "instance variables" are tied to each object instance
- Whereas static member variables are tied to the class

```c++
#include <iostream>
#include <string> 

class Animal {
	public:
		std::string species; //Instance member variable, tied to instance
		static int total; //Static member variable, tied to class
	//Constructor
	Animal(std::string animal_species) {
		species = animal_species;
		total++; //Keep track of how many instances/animals created
	}
	//Destructor
	~Animal(void) {
		total--; //Decrease the total when an animal is deleted
	}
};

int	Animal::total = 0; //Initialise static variable to 0. Must be done outside of class def. Access variable in main() using `Animal::total`

int	main()
{
	//Create object instances
	Animal *lion = new Animal("lion");
	Animal *tiger = new Animal("tiger");

	std::cout << "Lion: " << lion->species << std::endl;
	std::cout << "Tiger: " << tiger->species << std::endl;
	std::cout << "Total: " << Animal::total << std::endl;

	delete lion; //Will then give us a total of 1

	std::cout << "Total: " << Animal::total << std::endl;

	return (0);
}
```

- The output (without the destructor):
```c++
Lion: lion
Tiger: tiger
Total: 2
```