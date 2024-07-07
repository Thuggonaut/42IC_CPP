# Member functions
- or "Methods"
- Functions attached to objects of a class
- Private member functions cannot be used outside the class

```c++
#include <iostream>

using namespace std;

class Rectangle {
	private:
		double	length;
		double	width;
	//Private function for calculating rectangle area
	double area () {
		return (length * width);
	}

	public:
		//Function attached to Rectangle objects
		void setDimensions(double l, double w) {
			length = l;
			width = w;
		}

		double perimeter(); //Declare function prototype. It'll be public since its declared under public

		//Must access private member function within the class
		void printArea() {
			cout << "Area: " << area() << endl;
		}
};

//Can define the class member function `perimeter() outside the class def
double	Rectangle::perimeter() {
	return (2 * (length + width));
}

int	main()
{
	Rectangle	rectangle1;

	rectangle1.setDimensions(10, 20); //Set private member variables of rangtangle1 object instance
	cout << "Perimeter: " << rectangle1.perimeter() << endl; //Get perimeter

	rectangle1.printArea(); //Get area calculation

	return (0);
}
```