# CPP Module 03
- Inheritance


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
	- If a base class declares a virtual member function, and there are multiple derived classes, not all has to override said member funciton. It just means, any derived class can implement their own if they want.


# Exercise 02: Repetitive work

### Review:
- Similarly to `ScavTrap`, implement `FragTrap`.
	- Name, which is passed as parameter to a constructor
	- `Hit points` (100), represent the health of the ClapTrap
	- `Energy points` (100)
	- `Attack damage` (30)
- add function: `void highFivesGuys(void);`
	- This member function displays a positive high fives request on the standard output.



# Exercise 03: Now it’s weird!

### Review:
- Create a monster: a ClapTrap that’s half FragTrap, half
ScavTrap. It will be named `DiamondTrap`, and it will inherit from both the FragTrap
AND the ScavTrap. This is so risky!
- The DiamondTrap class will have a `name private attribute`.

- Its attributes and member functions will be picked from either one of its parent classes:
	- Name, which is passed as parameter to a constructor
	- `ClapTrap::name (parameter of the constructor + "_clap_name" suffix)`
	- `Hit points (FragTrap)`
	- `Energy points (ScavTrap)`
	- `Attack damage (FragTrap)`
	- `attack() (Scavtrap)`

- DiamondTrap will have its own special capacity: 
	- `void whoAmI();`
	- This member function will display both its name and its `ClapTrap name`.
- Of course, the `ClapTrap` subobject of the `DiamondTrap` **will be created once**, and only
once.

🧐 ***What is a subobject?***
- It's an instance of a base class that is part of a derived class.
- For example, in this exercise's case:
	- `DiamondTrap` has two subobjects: `FragTrap` and `ScavTrap`, both of which contain their own versions of the `ClapTrap subobject`.

- We need to:
	- Ready the previous classes for inheritance.
	- Create DiamondTrap to inherit both FragTrap and ScavTrap.
	- Initialize attributes.
	- Implement special functions.