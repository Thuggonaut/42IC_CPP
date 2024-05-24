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
		int	ph_no;

		//Constructor
		PbContact(std::string set_name, int set_ph_no) {
			//Output `this`
			std::cout << "		this memory address: " << this << std::endl;
			name = set_name;
			ph_no = set_ph_no;
		}
};

int	main()
{
	//Make a PbContact object
	PbContact contact1("Bob, 0411 222 333);

	return (0);
}
```