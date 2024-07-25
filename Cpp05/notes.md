# CPP Module 05
- Repetition and Exceptions

# Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!

***What are exception classess?***
- Exception classes are used to handle errors and exceptional situations in a structured way.
- C++ provides a hierarchy of standard exception classes defined in the `<stdexcept>` and `<exception>` headers. Some commonly used ones include:
  - `std::exception`: The base class for all standard exceptions.
  - `std::runtime_error`: For runtime errors.
  - `std::logic_error`: For logical errors detected during program execution.
  - `std::bad_alloc`: Thrown by new when memory allocation fails.
  - `std::out_of_range`: For errors in container element access.

- Creating Custom Exceptions: You can create custom exception classes by inheriting from `std::exception` or any other relevant standard exception class.
```c++
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred";
    }
};
```

- Throwing Exceptions: Use the throw keyword to signal an exception.
```c++
if (error_condition) {
    throw MyException();
}
```

- Catching Exceptions: Use the try and catch blocks to handle exceptions.
```c++
try {
    // Code that might throw an exception
} catch (const MyException& e) {
    std::cerr << e.what() << '\n';
} catch (const std::exception& e) {
    std::cerr << "Standard exception: " << e.what() << '\n';
}
```
