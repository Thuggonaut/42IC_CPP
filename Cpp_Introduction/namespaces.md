# Namespaces

- Using multiple libraries that may have the same function names are a conflict.
- Namespaces are a solution to potential name conflicts. 
- Names can be given to functions and classes within a named scope.
- For example:

```c++
#include <iostream>
#include <cmath> //round()

using namespace std;

namespace raw //`namespace` is used to declare the scope `raw`
{
	void	print(double nbr)
	{
		cout << "print raw: " << nbr << endl;
	}
}

namespace	rounded //`namespace` is used to declare the scope `rounded`
{
	void	print(double nbr)
	{
		cout << "print rounded: " << round(nbr) << endl;
	}
}
```
- Both print() functions aren't conflicting because they're defined in different namespaces.
- If we want to access the print() functions, we use the scope resolution operator (`::`) e.g.:
```c++
int	main()
{
	raw::print(1.23);
	rounded::print(1.23);
	return (0);
}
```

