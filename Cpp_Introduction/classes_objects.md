# Classes and Objects (instances)

# Objects
- Using objects is part of Object-oriented programming.
- Programming that group together related data, and functions that work with said data. 
- Let's use an example of bank accounts, that has various data associated with it:

```c++
#include <iostream>
#include <string> //Note: forbidden in 42_CPP

class	BankAccount {
	public:
		std::string	name;
		int	balance;
};

int	main()
{
	BankAccount account1;
	account1.name = "Bob";
	account1.balance = 2500;

	BankAccount account2;
	account1.name = "Jane";
	account1.balance = 5000;

	std::cout << account1.name << " has " << account1.balance " dollars " << std::endl;

	account2.balance = account2.balance - 1000;

	std::string	pin;
	std::string	address;
	std::string	acn;
}
```
- Define a "class"
	- A new type of "thing" that has "fields" or "properties" of that thing. It defines what it means to be that "thing".
	- Objects, are the individual instances, of that "thing". E.g., individual bank accounts.
- Define member variables of the class.
- Access specifiers:
	- `public`: means the member variables are accessible from outside the class it's declared in.
- Now that we have our class, we can create BankAccount objects, which are instances of the class.
	- When we defined this class, we are saying "this what being a bank account is".
- We can access the public member variables in main() and manipulate them also.