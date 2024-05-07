# C++ Modules

# Introduction:
- C++ or "C, with Classes" is an extension of C.
- CPP aims to demonstrate Object-Oriented Programming, OOP. 


# General rules:
- Must comply with `C++ 98 standard`.
- Compile with `g++` and the flags `-std=c++98 -Wall -Wextra -Werror`.
- Write `class names in UpperCamelCase` format.
	- Files containing class code will always be named according to the class name.
	- For instance: `ClassName.hpp/ClassName.h`, `ClassName.cpp`, or `ClassName.tpp`. 
	- For instance, if a class is named BrickWall, the corresponding files should be named BrickWall.hpp, BrickWall.cpp, or BrickWall.tpp.
- Unless specified, every `output messages must be ended by a \n` and `displayed to the console`.
- Goodbye Norminette!
- **PERMITTED:**
	- The standard library.
	- `STL` (Standard Template Library) in the Module 08 and 09 only.
- **FORBIDDEN:**
	- External libraries: `C++11` (and derived), `Boost`.
	- Functions: `*printf()`, `*alloc()` and `free()`.
	- Unless specified, `using namespace` `<ns_name>` and `friend` keywords.
	- (Except Module 08 and 09) `Containers` (`vector/list/map/`and so forth) and `Algorithms` (anything requiring the `<algorithm>` header).
	- Any function implementation put in a header file (except for function templates). Example function template:
```c++
template <typename T> //Generic function that can operate on various data types. `T` for type
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
```
- No memory leaks.
- Unless specified, your classes must be designed in the `Orthodox Canonical Form` OCF:
	- `Private data members`:
	The class's internal state is hidden from the outside world. Can only manipulate it through the class's public member functions.
	- `Public member functions`:
	The class has at least one public member function for each operation that the class is supposed to perform. These functions has descriptive names that indicate what they do.
	- `Getter and Setter Methods`: 
	Access to private member variables are provided through getter and setter methods rather than making the variables public.
	- `Constructors and destructors`:
	The class has a constructor that initializes its private data members, and a destructor that cleans up any resources the class is using.
	- `Copy constructor and copy assignment operator`: 
	The class has a copy constructor and a copy assignment operator that make deep copies of the class's private data members. When a new object NO is created from an existing object EO, or when an EO is assigned a new value, the NO has its own copy of the data members.
	- `Assignment operator`: 
	The class has an assignment operator that makes a deep copy of the right-hand operand and assigns it to the left-hand operand. When an EO is assigned a new value, the left-hand operand has its own copy of the data members.
	- `Equality and inequality operators`:
	The class has equality and inequality operators that compare the values of the private data members of two objects, and return true or false.
	- `Input and output operators`:
	The class has input and output operators that read and write the values of the private data members to and from an input stream and an output stream.
- You should be able to use each of your headers independently from others.
- Example of a C++ class in the OCF:
```C++
//Car.hpp

#ifndef CAR_HPP
#define CAR_HPP

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    //Constructor
    Car(const std::string& brand, const std::string& model, int year);

    //Destructor
    ~Car();

    //Getter functions
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;

    //Setter functions
    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setYear(int year);

    //Display information
    void displayInfo() const;
};

#endif //CAR_HPP
```

```C++
//Car.cpp

#include "Car.hpp"
#include <iostream>

//Constructor implementation
Car::Car(const std::string& brand, const std::string& model, int year)
    : brand(brand), model(model), year(year) {}

//Destructor implementation
Car::~Car() {
    std::cout << "Car object destroyed\n";
}

//Getter functions implementation
std::string Car::getBrand() const {
    return brand;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

//Setter functions implementation
void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

void Car::setYear(int year) {
    this->year = year;
}

//Display information implementation
void Car::displayInfo() const {
    std::cout << "Brand: " << brand << "\n";
    std::cout << "Model: " << model << "\n";
    std::cout << "Year: " << year << "\n";
}
```

| 🔸 **Library** | Use |
| --- | --- |
| <iostream> | For Input/output operations <br>Provides standard input/output streams |
| <cstring> |  Functions for string manipulation |


| 🔸 **Object** | Library | Use |
| --- | --- | --- |
| std::cout | <iostream> | Output text to the standard output device/console <br>`<<` to write, e.g.: <br>`std::cout << "Hello, World!";` |

| 🔸 **Class** | Library | Use |
| --- | --- | --- |


| 🔸 **Function** | Library | Use |
| --- | --- | --- |


| 🔸***FILE I/O*** | | |
| open() | <fcntl.h> <br>`int open(const char *pathname, int flags);` | Open or create a file and obtain a file descriptor (fd) or -1 on failure. |