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

### Review:
- Object slicing:
	- Assignment of derived class objects to base class objects leads to object slicing, where only the base class part is copied.


# Exercise 01: I don’t want to set the world on fire
- Implement a `Brain` class. 
	- It contains an array of `100` `std::string` called `ideas`
- Update `Dog` and `Cat` to have a private attribute `Brain *` attribute
	- Upon construction, Dog and Cat will create their Brain using `new Brain();`
	- Upon destruction, Dog and Cat will `delete` their Brain.
- In `main`, create and fill an array of `Animal` objects.
	- Half of it will be `Dog` objects and the other half will be `Cat` objects.
	- At the end of your program execution, loop over this array and delete every Animal.
	- You must delete directly dogs and cats as Animals.

### Review:
- Multiple inheritance
	- A derived class can inherit from more than one base class. Multiple inheritance allows a class to inherit attributes and methods from more than one parent class, enabling more complex and flexible designs.



# Exercise 02: Abstract class
- An abstract class is a class that cannot be instantiated directly. It is designed to be a base class for other classes.
- Contains at least one pure virtual function, which is declared by assigning = 0 to a virtual function. This makes the class abstract.
- Derived classes must implement all pure virtual functions to be instantiated.

- Fix the `Animal` class so nobody can instantiate it. Everything should work as before.