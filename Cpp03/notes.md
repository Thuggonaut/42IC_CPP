# CPP Module 03

# Exercise 00: Aaaaand... OPEN!

### Review:
- When `ClapTrack` attacks, it causes its target to lose `<attack damage>` hit points.
- When `ClapTrap` repairs itself, it gets `<amount>` hit points back. 
	- Attacking and repairing cost `1 energy point` each. 
	- Of course, `ClapTrap` can’t do anything if it has no hit points or energy points left.

- In all of these member functions, you have to print a message to describe what happens. 
	- For example, the `attack()` function may display something like:
	`ClapTrap <name> attacks <target>, causing <damage> points of damage!`
- The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
- Implement and turn in your own tests to ensure your code works as expected.


# Exercise 01: Serena, my love!

### Review:
- Update `ClapTrap class`: 
	- Ensure it's ready for inheritance.
- Create `ScavTrap` class: 
	- Inherit from ClapTrap. ScavTrap will use the attributes of ClapTrap. Initialize them to:
		- Name, which is passed as parameter to a constructor
		- Hit points (100), represent the health of the ClapTrap
		- Energy points (50)
		- Attack damage (20)
	- Only its constructors, destructor and `attack()` will print different messages.
	- Add `void guardGate` function: Specific to `ScavTrap`.
		- This member function will display a message informing that `ScavTrap is now in Gate keeper mode`.

🧐 ***What construction/destruction chaining?***
- A concept in object-oriented programming where constructors and destructors of classes are called in a specific order.
- **Construction chaining**: When an object is created, the constructors of its base classes are called first, moving from the base class up to the derived class. This ensures that the base parts of the object are initialized before the derived parts.
- **Destruction chaining**: When an object is destroyed, the destructors are called in the reverse order: the derived class destructor is called first, followed by the base class destructors. This ensures that the derived parts are cleaned up before the base parts.

🧐 ***What makes a .hpp file ready for inheritance?***
- **'protected' access specifier**
	- Class members that should be accessible by derived classes are changed from private to protected. 
	- This allows derived classes to access these members directly while still keeping them hidden from outside access.
- **Virtual Destructor**
	- This ensures that when a derived class object is deleted through a base class pointer, the derived class's destructor is called, preventing resource leaks and ensuring proper cleanup.
- **Virtual Functions**
	- The functions that are intended to be overridden in the derived classes are marked as virtual. 
	- This allows the derived class to provide its own implementation of the function.