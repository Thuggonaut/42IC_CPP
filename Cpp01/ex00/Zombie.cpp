#include "Zombie.hpp"

Zombie::Zombie(string name) //Initilize the variable `name` with the given parameter
	: name(name) {}

Zombie::~Zombie() {
	cout << name << " is dead" << endl; //Print message when object destroyed
}

void Zombie::announce() {
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie *newZombie(string name) {
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	
	return (zombie); //Allocate on the heap and return a pointer to the new object
}

void randomChump(string name) {
	Zombie zombie(name); //Create a zombie object on the stack
	zombie.announce();
}
