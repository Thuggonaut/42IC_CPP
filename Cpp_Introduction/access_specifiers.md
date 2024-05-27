# Public and private access specifiers
- Modify how members of a class is used

```c++
#include <iostream>
#include <string>

class Employee {
	public:
		std::string name; //Can access outside of class definition, same for functions

	private:
		double salary; //Cannot be accessed outside the class definition, same for functions
};

int	main()
{
	Employee employee1;
	employee1.name = "Kevin"; //Public variable is accessible outside of the class definition

	return (0);
}
```

- Private variables can be accessed in other ways, e.g. via a function in public:
```c++
#include <iostream>
#include <cstring>

class Employee {
	public:
		std::string name;

		//These functions can access the private member `salary` because they are members of the class
		void set_salary(double amount) {
			if (amount < 0) //Guard access to `salary` against error before setting
				salary = 0;
			else
				salary = amount;
		}

		double get_salary() {
			return (salary);
		}

		void printBonus() {
			std::cout << name "Bonus: " << calculateBonus()  std::endl;
		}

	private:
		double salary; 

		double calculateBonus() {
			return (salary * 0.10);
		}
};

int	main()
{
	Employee employee1;
	employee1.name = "Kevin"; 

	employee1.set_salary(50000);
	std::cout << "Salary: " << employee1.get_salary() << std::endl;

	employee1.printBonus();
	
	return (0);
}
```

- When there are private members, "setters and getters" are common
- Common in OOP in general
- Encapsulation: data is managed by the class, and access is protected/restricted
- "Information hiding": when making member functions private, the class hides the secrets of how it works