# Member functions
- or "Methods"
- Functions attached to objects of a class
- Private member functions cannot be used outside the class

```c++
#include <iostream>

class Rectangle {
	private:
		double	length;
		double	width;
	//Private function for calculating rectangle area
	double	area (void) {
		return (length * width);
	}

	public:
		//Function attached to Rectangle objects
		void	set_dimensions(double l, double w) {
			length = l;
			width = w;
		}

		double	perimeter(void); //Declare function prototype. It'll be public since its declared under public

		//Must access private member function within the class
		void	print_area(void) {
			std::cout << "Area: " << area() << std::endl;
		}
};

//Can define the class member function `perimeter() outside the class def
double	Rectangle::perimeter(void) {
	return (2 * (length + width));
}

int	main()
{
	Rectangle	rectangle1;

	rectangle1.set_dimensions(10, 20); //Set private member variables of rangtangle1 object instance
	std::cout << "Perimeter: " << rectangle1.perimeter() << std::endl; //Get perimeter

	rectangle1.print_area(); //Get area calculation

	return (0);
}
```