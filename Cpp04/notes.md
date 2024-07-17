# CPP Module 04
- Subtype polymorphism
- abstract classes
- interfaces


# Exercise 00: Polymorphism
- Implement a base class `Animal`
- Derived classes:
	- `Dog`
	- `Cat`
	- These must set their type field depending on their name.
		- Dog’s type will be initialized to `"Dog"`
		- Cat’s type will be initialized to `"Cat"`
- The type of the Animal class can be left empty or set to the value of your choice.
- Every animal must be able to use the member function:
	- `makeSound()` It will print an appropriate sound
- Implement a `WrongCat` class that inherits from a `WrongAnimal` class. 
	- If you replace the `Animal` and the `Cat` by the wrong ones in the code above, the `WrongCat` should output the `WrongAnimal` sound.
- Implement and turn in more tests than the ones given above.