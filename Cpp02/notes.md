# CPP Module 02
- Ad-hoc polymorphism
- operator overloading
- Orthodox Canonical class form


# New rules:
- All classes will implement:
	- Default constructor
	- Copy constructor
	- Copy assignment operator
	- Destructor
- Split your class code into two files:
	- The header file (.hpp/.h) contains the class definition whereas 
	- The source file (.cpp) contains the implementation.


# Exercise 00: My First Class in Orthodox Canonical Form

🧐 ***What is a fixed-point number?***
- A representation of real numbers that maintains a fixed number of digits after the decimal point. 
- Fixed-point numbers allocate a specific portion of the number to the integer part and another portion to the fractional part.

**Range and precision**
- The range of values a fixed-point number can represent is limited by the number of bits assigned to the integer part. 
- The precision, determined by the number of fractional bits, is also fixed.
- Example implementation:
```c++
#include <iostream>

class FixedPoint {
public:
    // Number of fractional bits
    static const int fractionalBits = 8;
    // Scale integer values to represent fixed-point numbers
    static const int scaleFactor = 1 << fractionalBits;

private:
    // Internal representation using an integer
    int value;

public:
    // Constructors
    FixedPoint() : value(0) {}
    FixedPoint(int integerPart) : value(integerPart * scaleFactor) {}
    FixedPoint(float floatValue) : value(static_cast<int>(floatValue * scaleFactor)) {}

    // Addition
    FixedPoint operator+(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value + other.value);
    }

    // Subtraction
    FixedPoint operator-(const FixedPoint& other) const {
        return FixedPoint::fromRaw(value - other.value);
    }

    // Multiplication
    FixedPoint operator*(const FixedPoint& other) const {
        return FixedPoint::fromRaw((value * other.value) / scaleFactor);
    }

    // Division
    FixedPoint operator/(const FixedPoint& other) const {
        return FixedPoint::fromRaw((value * scaleFactor) / other.value);
    }

    // Conversion to float
    float toFloat() const {
        return static_cast<float>(value) / scaleFactor;
    }

    // Conversion to raw value
    int toRaw() const {
        return value;
    }

    // Factory method to create a FixedPoint from raw value
    static FixedPoint fromRaw(int rawValue) {
        FixedPoint fp;
        fp.value = rawValue;
        return fp;
    }

    // Method for printing the fixed-point number
    void print() const {
        std::cout << toFloat();
    }
};

int main() {
    FixedPoint a(5.5); // Representing 5.5
    FixedPoint b(2.75); // Representing 2.75

    FixedPoint sum = a + b;
    FixedPoint diff = a - b;
    FixedPoint prod = a * b;
    FixedPoint quot = a / b;

    std::cout << "a: ";
    a.print();
    std::cout << std::endl;

    std::cout << "b: ";
    b.print();
    std::cout << std::endl;

    std::cout << "Sum: ";
    sum.print();
    std::cout << std::endl;

    std::cout << "Difference: ";
    diff.print();
    std::cout << std::endl;

    std::cout << "Product: ";
    prod.print();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quot.print();
    std::cout << std::endl;

    return 0;
}
```

🧐 ***What is operator()?***
- Is an operator overloading function.
- Operator overloading allows you to define or redefine the behavior of operators (such as +, -, *, and /) for user-defined types like classes.
- In the example implementation above, the overloaded operators are member functions of the `FixedPoint` class. 
	- Each of these functions takes another `FixedPoint` object as a parameter and returns a new `FixedPoint` object as the result of the operation.



# Exercise 01: Towards a more useful fixed-point number class
- Add the following public constructors and public member functions to your class:
	- A constructor that takes a `constant integer` as a parameter.
		- It converts it to the corresponding fixed-point value. 
		- The fractional bits value is initialized to 8 like in exercise 00.
	- A constructor that takes a `constant floating-point` number as a parameter.
		- It converts it to the corresponding fixed-point value. 
		- The fractional bits value is initialized to 8 like in exercise 00.
	- A member function `float toFloat( void ) const;`
		- that converts the fixed-point value to a floating-point value.
	- A member function `int toInt( void ) const;`
		- that converts the fixed-point value to an integer value.

	- And add the following function to the `Fixed` class files:
		- An overload of the insertion («) operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter. 

**static_cast()**
- performs a type conversion. 
- It is used to convert one data type to another. 
- It is a static_cast because it is a compile-time operation, meaning the compiler can check if the conversion is safe and will not result in a loss of data.


# Exercise 02: Now we’re talking
- Add public member functions to your class to overload the following operators:
	- The 6 comparison operators: `>, <, >=, <=, == and !=`.
	- The 4 arithmetic operators: `+, -, *, and /`.
	- The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as `1 + ε > 1`.
- Add these four public overloaded member functions to your class:
	- A static member function `min` that takes as parameters two references on fixed-point numbers, and returns a reference to the smallest one.
	- A static member function `min` that takes as parameters two references to constant fixed-point numbers, and returns a reference to the smallest one.
	- A static member function `max` that takes as parameters two references on fixed-point numbers, and returns a reference to the greatest one.
	- A static member function `max` that takes as parameters two references to constant fixed-point numbers, and returns a reference to the greatest one.



# Exercise 03: BSP
🔹 Implement a function which indicates whether a point is inside of a triangle or not.
- `bool bsp( Point const a, Point const b, Point const c, Point const point);`
	- `a, b, c`: The vertices of our beloved triangle.
	- `point`: The point to check.
	- `Returns`: `True` if the point is inside the triangle. `False `otherwise.
	- Thus, if the point is a vertex or on edge, it will return False.
🔹 Implement and turn in your own tests.

🧐 ***What is BSP?***
- BSP stands for Binary space partitioning. 
- a method for recursively subdividing a space into two convex sets using hyperplanes (in 2D, these are lines). 
- This technique is commonly used in computer graphics, computational geometry, and game development for:
	- Rendering Optimization: BSP trees help determine which objects are visible from a particular viewpoint, improving rendering efficiency by allowing back-to-front or front-to-back drawing.
	- Collision Detection: It simplifies the process of checking intersections between objects in a scene.
	- Scene Management: BSP can organize complex environments, facilitating efficient spatial queries and object management.


