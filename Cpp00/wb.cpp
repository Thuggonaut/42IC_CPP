#include <iostream>

int	main()
{
	int	x = 0;
	std::cout << "Enter your age: ";
	if (std::cin >> x)
		std::cout << "You are " << x << " years old" << std::endl;
	else
	{
		std::cin.clear(); //Clear the `cin` error state. `clear()` function is "attached" to `cin`. The error needs to be cleared in order for `cin` to be used again
		std::cout << "Error: digit values only" << std::endl;
	}
	return (0);
}