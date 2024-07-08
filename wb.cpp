#include <iostream>
#include <string>

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