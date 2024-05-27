# this Keyword
- used in non-static member functions
- Non-static member functions has an implicit argument that can be used called `this`
	- Implicit because, we don't see it as parameters, however it's there
- `this` will be a pointer to "that instance" of the object

```c++
#include <iostream>
#include <string> 

class PbContact {
	public:
		std::string	name;
		std::string	ph_no;

		//Constructor
		PbContact(std::string set_name, std::string set_ph_no) {
			//Output `this`
			std::cout << "	this memory address: " << this << std::endl;
			name = set_name;
			ph_no = set_ph_no;
		}
};

int	main()
{
	//Make a PbContact object
	PbContact contact1("Bob", "0411 222 333");

	//Output memory address
	std::cout << "contact1 memory address: " << &contact1 << std::endl; //Outputs the same memory address as `this` because `this` is a pointer to this object instance `contact1`

	return (0);
}
```
- How can we use `this` pointer to the object instance?
```c++
#include <iostream>
#include <string> 

//We can also have a member function, pass in `this` pointer, as an argument
//Define a function to work with a Pbcontact object pointer
class PbContact; //Forward declaration of type first
void 	printData(PbContact *contact); //Accept a pointer to a PbContact object

class PbContact {
	public:
		std::string	name;
		std::string	ph_no;
		static int	total;

		//Constructor. Instead of "set_name" and "set_ph_no", we can use `this->name` etc., with no naming conflicts/errors
		PbContact(std::string name, std::string ph_no) {
			//Output `this`
			std::cout << "	this memory address: " << this << std::endl;
			this->name = name; //Using the pointer to the object instance, and accessing the variable `name`. Then, it assigns the parameter value `name` to the variable `name`
			this->ph_no = ph_no;
			printData(this);
			total++;
			this->printTotal();
		}

		//Another non-static member function
		void	printTotal() {
			std::cout << "Total contacts: " << total << std::endl;
		}
};

void 	printData(PbContact *contact){
	std::cout << "Name: " << contact->name << std::endl;
	std::cout << "Ph no: " << contact->ph_no << std::endl;
	return;
}

int PbContact::total = 0;

int	main()
{
	//Make a PbContact object
	PbContact contact1("Bob", "0411 222 333");
	PbContact contact2("Jane", "0422 333 444");
	
	return (0);
}
```
