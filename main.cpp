#include <iostream>
double LineareEquation(int , int ); // ax + b = 0
int main()
{
	int a{}, b{};
	std::cin >> a >> b;

	// caller
	try
	{
		std::cout << LineareEquation(a, b) << std::endl;
	}
	catch (std::logic_error)
	{
		std::cerr << "Divide by zero!" << std::endl;
	}


	return 0;
	}

double LineareEquation(int a, int b)
{
	//1. Type Conversion
	//2. Divide By Zero
	// callee
	if (a == 0)
	{
		throw std::logic_error("divide by zero!");
	}
	else
	{
		return -((double)b / a);
	}
}
